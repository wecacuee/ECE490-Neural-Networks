---
layout: post
title: Running Jupyter on ACG with SLURM
date: 2023-01-23
category: lectures
---
Running Jupyter server via SLURM enables you to run your Jupyter server on a SLURM
node with more resources; sometimes allowing you to use GPU. It is a better
practice to run heavy code via SLURM, because login nodes are meant for login
only. This documentation specifically covers this process.

<style rel="text/css">
div.post h3.h4reset { 
    counter-reset: h4counter
}
div.post h4:before {
    counter-increment: h4counter;
    content: counter(h4counter) ".\0000a0\0000a0";
}
</style>

[This guide is adapted from nero-docs.stanford.edu](https://nero-docs.stanford.edu/jupyter-slurm.html)

With Katahdin ACG, you'll need to submit this as a SLURM job. That way,
your jupyter lab server gets placed on a SLURM node with enough
resources to host it. To summarize: We are creating a slurm job that
runs jupyterlab on a SLURM node, for up to 2 days (max is 7). Once
running, we are going to connect to the jupyterlab instance with SSH
port forwarding from our local laptop. A tunnel must be created as you
cannot directly SSH to SLURM nodes on Katahdin.

{:.h4reset}
### First create a SLURM sbatch file

Replace $USER with your own ACG username.
Use Terminal On Your Laptop:

#### SSH to Katahdin ACG

{:.text}
    ssh $USER@katahdin.acg.maine.edu

#### Create your sbatch file. You can use your text editor of choice.

    vi jupyterLab.sh

Paste the following text into your sbatch script, and save the file.

{:.bash}
    #!/bin/bash
    #SBATCH --job-name=jupyter
    #SBATCH --partition=grtx # You can pick from https://acg.maine.edu/hpc#h.b5slztm4yz12
    #SBATCH --gres=gpu:1 # not clear if this is obeyed https://slurm.schedmd.com/gres.html
    #SBATCH --time=2-00:00:00
    #SBATCH --mem=5GB
    #SBATCH --output=/home/%u/logs-jupyter-%x-%j.log

    module load nv/pytorch # Load pytorch singularity image
    singularity exec --nv $PYTORCH_CONT jupyter notebook --ip=0.0.0.0 # start jupyter notebook


**Replace the `$USER` part
of your
`#SBATCH --output=home/$USER/jupyter.log` with your ACG Username. Or, provide an alternate path for
your log output.**

This tells SLURM to launch a Jupyter Lab server on the node with your
requested resources.

Now we need to send this as a job to SLURM.


#### Submit this sbatch to SLURM:

    vdhiman@katahdin:~$ sbatch jupyterLab.sh 
    Submitted batch job 1005424

#### Now, you can check that your job is running:

    vdhiman@katahdin:~$ squeue -u $USER
                 JOBID PARTITION     NAME     USER ST       TIME  NODES NODELIST(REASON)
               1005424      grtx  jupyter  vdhiman PD       0:00      1 (Priority)

Note the ST (Status) column says PD (Pending). After a suitable node is found,
it should change to ST=R (Running). This might take a while if the server is
busy.

    vdhiman@katahdin:~$ squeue -u vdhiman
                 JOBID PARTITION     NAME     USER ST       TIME  NODES NODELIST(REASON)
               1005424      grtx  jupyter  vdhiman  R       0:01      1 grtx-1

Once it is running you can continue...

 Check the
log output to find out the HOSTNAME we need to use to create an SSH tunnel:

#### Check log file for Jupyter URL

You can use the `tail -f` command to follow the last 10 lines of the log file.

    tail -f ~/jupyter.log

The log file will output something like this:

{:.text}
    vdhiman@katahdin:~$ tail jupyter.log
    [I 19:09:29.687 NotebookApp]  or http://127.0.0.1:8888/?token=8a5d8e1laskdjfl1askjdfl1ksjadfl1kjsadlfsjadc3386
    [I 19:09:30.097 NotebookApp] Use Control-C to stop this server and shut down all kernels (twice to skip confirmation).
    [W 19:09:30.302 NotebookApp] No web browser found: could not locate runnable browser.
    [C 19:09:30.566 NotebookApp] 
        
        To access the notebook, open this file in a browser:
            file:///home/vdhiman/.local/share/jupyter/runtime/nbserver-12238-open.html
        Or copy and paste one of these URLs:
            http://grtx-1.cluster:8888/?token=8a5d8e1laskdjfl1askjdfl1ksjadfl1kjsadlfsjadc3386
         or http://127.0.0.1:8888/?token=8a5d8e1laskdjfl1askjdfl1ksjadfl1kjsadlfsjadc3386
         
Note the file after "open this file in a browser". Remove the `file://` search
the file for link. For example,
{:.text}
    vdhiman@katahdin:~$ grep window.location.href /home/vdhiman/.local/share/jupyter/runtime/nbserver-12238-open.html 
        window.location.href = "http://0.0.0.0:8888/tree?token=9946b79c2cae1c4744aa90ce58e4133add9d58d0ded77161";
    vdhiman@katahdin:~$

This will give you a link. Note the port number. For me that is 8888. Let's
call this REMOTE_PORT=8888.

First check if the status of the job under ST is R for running. Then look for string under NODELIST(REASON). This gives me the HOSTNAME. For me the HOSTNAME is grtx-1.

**Note the http://HOSTNAME:REMOTE_PORT/token=TOKEN in the first part, you'll need that info  to setup a port-forwarding connection. For me, the HOSTNAME=grtx-1.cluster, REMOTE_PORT=8888, and TOKEN=8a5d8e1laskdjfl1askjdfl1ksjadfl1kjsadlfsjadc3386**

**If the output simply says http://hostname:8888/ then you have to use the
ouptut of squeue -u $USER under the nodelist column**

We need to find the host where the job got scheduled. We can use squeue
command to to that.
{:.text}
    vdhiman@katahdin:~$ squeue -u $USER
             JOBID PARTITION     NAME     USER ST       TIME  NODES NODELIST(REASON)
           1086781      grtx  jupyter  vdhiman  R    3:14:58      1 grtx-1

#### Create an SSH tunnel

Then on your laptop, open a new Terminal Window and create an SSH
tunnel using `ssh -L 8888:HOSTNAME:REMOTE_PORT $USER@katahdin.acg.maine.edu`.
For my output the command is:

    ssh -L 8888:gtrx-1.cluster:8888 $USER@katahdin.acg.maine.edu

**Important: You must replace the HOSTNAME:REMOTE_PORT (gtrx-1.cluster:8888) in the command
below with your node name address from previous step**

Note that whatever your log output says for hostname you will need to use in
the command above. DO NOT just copy and paste the example, you have to
replace the HOSTNAME:REMOTE_PORT (the gtrx-1.cluster:8888 part) to be the one your log
output specifies.


#### On your laptop open a browser window and you can then browse to:

    http://127.0.0.1:8888/?token=8a5d8e1laskdjfl1askjdfl1ksjadfl1kjsadlfsjadc3386

**Important: Replace the "?token=TOKEN" part of the URL with your token from
log file**

*Note that this is copied from the output log file where it defines your
Jupyter address and TOKEN. You MUST copy the token from the log out put,
and cannot just use the example above. It may take up to 10 minutes for
the "jupyter.log" output to show you the text with your token.*

For the remainder of your job run, the hostname and port will stay the same.
If you close your laptop you will need to recreate an SSH Tunnel - you
can reuse the "ssh -L8888" command above. If your job ends on Katahdin
ACG, you need to resubmit your slurm job, and then modify your SSH
Tunnel command with the new hostname. Jobs last for a maximum of 7
days.

