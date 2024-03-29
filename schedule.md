---
layout: page
title: Schedule
---
{% capture colabbaseurl %}https://colab.research.google.com/github/wecacuee/ECE490-Neural-Networks/blob/master/{% endcapture %}
# Table of contents
{:.no_toc}

* Seed list to be replaced by TOC
{:toc}

## Tentative schedule

[Link to Tentative schedule (Google sheets)](https://docs.google.com/spreadsheets/d/e/2PACX-1vQcpFgDuMa7kU-KxnyL38CPZGevyYSQtzbAN-nFSseT2CuskkHi7ffnf7rCF25STjucfxUz6P6cXqaO/pubhtml)

## Materials table

| Date  | Material            |   🎥         | Readings      | Homework       |
| ----- | ------------------- | ------------ | ------------- | -------------- |
| 01/17 | [Slides][S03]       | [🎥][V0117]  | [Py3][RPY3T]  | [HW0][HW02P]   |
| 01/19 |  [Slides][S05]      | [🎥][V0119]  |               |                |
| 01/24 | [IPYNB][IP011]      | [🎥][V0124]  | [Py3][RPY3T]  |                |
| 01/26 | [Slides][S0126]     | [🎥][V0126]  | [PyD][RPYDM]  | [HW1][IP012]   |
| 01/31 |  [Slides][S021]     | [🎥][V0131]  | [1][PyMPL]    |                |
|       |  [IPYNB][IP021]     |              | [2][PyNP]     |                |
|       |                     |              | [3][MML2]     |                |
| 02/01 | [Slides][S022]      | [🎥][V0202]  | [4][MML2]     | [HW2][HW202]   |
| 02/07 | [Slides][S207]      | [🎥][V0207]  | [5][MML5]     |                |
| 02/09 | [Slides][S209]      | [🎥][V0209]  | [5][MML5]     |                |
| 02/14 | [Slides][S214]      | [🎥][V0214]  | [5][MML5]     |                |
| 02/16 | [Slides][S216]      | [🎥][V0216]  | [5][MML5]     |                |
| 02/21 | [Slides][S221]      | [🎥][V0221]  | [5][MML5]     |                |
| 02/23 | [Slides][S223]      | [🎥][V0223]  | [5][MML5]     |                |
| 02/28 | [Slides][S0228]     | [🎥][V0228]  | [5][MML5]     |                |
| 03/07 | [Slides][S0307]     | [🎥][V0307]  | [5][MML5]     |                |
| 03/09 | [Slides][S0309]     | [🎥][V0309]  | [6][MML6]     |                |
| 03/21 | [Slides][S0321]     | [🎥][V0323]  | [6][MML6]     |                |
| 03/23 | [Slides][S0323]     | [🎥][V0323]  | [8][MML8]     |                |


## Material by week

### Week 1: Introduction and Setup


* 01/17:  
    + [Slides: Intro][S03], [Video][V0117]
    + [Prereq HW: due 01/24][HW02P]
    + [Reading: Python tutorial until Section 5][RPY3T]

[S03]: {{site.baseurl}}/posts/0000-00-03-intro
[V0117]: {{site.baseurl}}/posts/2023-01-17-video
[RPY3T]: https://docs.python.org/3/tutorial/index.html
[HW02P]: {{site.baseurl}}/posts/0000-00-02-prereq-hw

* 01/19: 

    + [Slides: Running Jupyter on ACG Katahdin][S05],  [Videos][V0119]
    + [Python_1.ipynb][IP011]

[S05]: {{site.baseurl}}/posts/0000-00-05-acg-jupyter
[V0119]: {{site.baseurl}}/posts/2023-01-19-acg-jupyter-video
[IP011]: https://colab.research.google.com/github/wecacuee/ECE490-Neural-Networks/blob/master/notebooks/01-py-intro/Python_1.ipynb

### Week 2: Python crashcourse

* 01/24:
    + [Python_1.ipynb][IP011] 
    + [Video][V0124]

[V0124]: {{site.baseurl}}/posts/2023-01-24-python-1-video


* 01/26:
    + [Slides][S0126], [Video][V0126]
    + [Python_1.ipynb][IP011]
    + [Python_2.ipynb][IP012]
    + Recommended reading: [Python tutorial][RPY3T] and 
      [Python Data Model][RPYDM]


[S0126]: {{site.baseurl}}/notebooks/01-py-intro/2023-01-26-python-1-slides.html
[V0126]: {{site.baseurl}}/posts/2023-01-26-py2-video
[IP012]: {{colabbaseurl}}/notebooks/01-py-intro/Python_2.ipynb
[RPYDM]: https://docs.python.org/3/reference/datamodel.html

### Week 3: Linear Models

* 01/31:
    + [LinearModels.ipynb][IP021]
    + [LinearModels slides annotated.pdf][S021]
    + [Video ][V0131]
    
* 02/02
   + [LinearModels2.pdf][S022]
   + [PlaneFitProblem_Colab.ipynb][HW202], [Download PlaneFitProblem.ipynb][DHW202]
   + [Video][V0202]
   + [Read Chapter 2 of MML Book][MML2]

[IP021]: {{colabbaseurl}}/notebooks/02-linear-models/LinearModels.ipynb
[S021]: {{site.baseurl}}/assets/0000-00-07-linear-models/LinearModels%20slides.pdf.pdf
[V0131]: {{site.baseurl}}/posts/2023-01-31-linear-models-video
[MML2]: https://mml-book.github.io/ "Chapter 2 of MML Book"
[MML5]: https://mml-book.github.io/ "Chapter 5 of MML Book"
[MML6]: https://mml-book.github.io/ "Chapter 6 of MML Book"
[MML8]: https://mml-book.github.io/ "Chapter 8 of MML Book"
[PyMPL]: https://matplotlib.org/stable/tutorials/index.html
[PyNP]: https://numpy.org/devdocs/user/quickstart.html
 
[IP022]: {{colabbaseurl}}/notebooks/02-linear-models/LinearModels2.ipynb
[S022]: {{site.baseurl}}/notebooks/02-linear-models/lm2/LinearModels2.pdf.pdf
[HW202]: {{colabbaseurl}}/notebooks/02-linear-models/PlaneFitProblem_Colab.ipynb
[BHW202]: https://mybinder.org/v2/gh/wecacuee/ECE490-Neural-Networks/HEAD?labpath=notebooks%2F02-linear-models%2FPlaneFitProblem.ipynb
[DHW202]: {{site.baseurl}}/notebooks/02-linear-models/PlaneFitProblem.ipynb
[V0202]: {{site.baseurl}}/posts/2023-02-02-lm2-video

### Week 4: Perceptron

* 02/07
    + [Perceptron.ipynb][IP207]
    + [Slides][S207]
    + [Video][V0207]

[IP207]: {{colabbaseurl}}/notebooks/02-linear-models/Perceptron.ipynb
[S207]: {{site.baseurl}}/assets/0000-00-07-linear-models/Perceptron%20slides.pdf.pdf
[V0207]: {{site.baseurl}}/posts/2023-02-07-perceptron-video


* 02/09
    + [Perceptron2.ipynb][IP209]
    + [Slides][S209]
    + [Video][V0209]

[IP209]: {{colabbaseurl}}/notebooks/02-linear-models/Perceptron2.ipynb
[S209]: {{site.baseurl}}/assets/0000-00-07-linear-models/Perceptron-slides-2.pdf.pdf
[V0209]: {{site.baseurl}}/posts/2023-02-09-perceptron-2-video

### Week 5: Perceptron continued

* 02/14
    + [Perceptron3.ipynb][IP214]
    + [Slides][S214]
    + [Video][V0214]

[IP214]: {{colabbaseurl}}/notebooks/02-linear-models/Perceptron3.ipynb
[S214]: {{site.baseurl}}/assets/0000-00-07-linear-models/Perceptron3.slides.pdf.pdf
[V0214]: {{site.baseurl}}/posts/2023-02-14-perceptron-2-video

* 02/16
    + [Autograd.ipynb][IP216]
    + [Slides][S216]
    + [Video][V0216]

[IP216]: {{colabbaseurl}}/notebooks/03-autograd/Autograd.ipynb
[S216]: {{site.baseurl}}/assets/0000-00-11-autograd/Autograd.slides.pdf.pdf
[V0216]: {{site.baseurl}}/posts/2023-02-16-autograd-video


### Week 6: Autograd and review 

* 02/21
    + [NumpyTutorial.ipynb][IP221]
    + [Practice Problem solutions.pdf][HW221]
    + [Video][V0221]
    + [Notes][S221]

[IP221]: {{colabbaseurl}}/notebooks/04-review/NumpyTutorial.ipynb
[HW221]: {{site.baseurl}}/assets/0000-00-12-review/Practice%20Problems.pdf
[V0221]: {{site.baseurl}}/posts/2023-02-21-autograd-video
[S221]: {{site.baseurl}}/assets/0000-00-12-review/Practice%20Problems.pdf.pdf

* 02/23

    + [AutogradNumpy.ipynb][IP223]
    + [Autograd Derivations][S223]
    + [Video][V0223]

[IP223]: {{colabbaseurl}}/notebooks/03-autograd/AutogradNumpy.ipynb
[V0223]: {{site.baseurl}}/posts/2023-02-23-autograd-video
[S223]: {{site.baseurl}}/assets/0000-00-12-review/02-23-Practice-Problems.pdf

###  Week 7: Multi Layer Perceptron

* 02/28
    + [Notes][S0228]
    + [Video][V0228]

[S0228]: {{site.baseurl}}/assets/0000-00-13-mlp/MLP.pdf.pdf
[V0228]: {{site.baseurl}}/posts/2023-02-28-video

* 03/02
    + Midterm exam

### Week 8: Multi Layer Perceptron

* 03/07
    + [Notes][S0307]
    + [microtorch.ipynb][microtorch.ipynb]
    + [microtorch.py][microtorch.py]
    + [microtorch_nn.py][microtorch_nn.py]
    + [Video][V0307]

[microtorch.ipynb]: {{colabbaseurl}}/notebooks/05-mlp/microtorch.ipynb
[microtorch.py]: {{site.baseurl}}/notebooks/05-mlp/microtorch.py
[microtorch_nn.py]: {{site.baseurl}}/notebooks/05-mlp/microtorch_nn.py
[V0307]: {{site.baseurl}}/posts/2023-03-07-video
[S0307]: {{site.baseurl}}/notebooks/05-mlp/DataModelsAndLearning.pdf.pdf

* 03/09
    + [Probability basic Notes][S0309]
    + [Video][V0309]

[S0309]: {{site.baseurl}}/assets/0000-00-14-prob/2023-03-09-Note-15-17.pdf
[V0309]: {{site.baseurl}}/posts/2023-03-09-video

### Week 9: Probability and Machine Learning

* 03/21
    + [Probability basic Notes 2][S0321]
    + [Video][V0321]

[S0321]: {{site.baseurl}}/assets/0000-00-14-prob/2023-03-21.pdf
[V0321]: {{site.baseurl}}/posts/2023-03-21-video

* 03/23
    + [Probability basic Notes 3][S0323]
    + [Video][V0323]

[S0323]: {{site.baseurl}}/assets/0000-00-14-prob/2023-03-23.pdf
[V0323]: {{site.baseurl}}/posts/2023-03-23-video


### Week 10: Pytorch

* 03/28
    + [MLP Using Pytorch.ipynb][IP328]
    + [NumpyTutorial-Pytorched.ipynb][IP328b]
    + [Video][V0328]
    + [Notes][S0328]

[IP328]: {{colabbaseurl}}/notebooks/06-pytorch/MLP%20Using%20Pytorch.ipynb
[IP328b]: {{colabbaseurl}}/notebooks/06-pytorch/NumpyTutorial-Pytorched.ipynb
[V0328]: {{site.baseurl}}/posts/2023-03-28-video
[S0328]: {{site.baseurl}}/notebooks/06-pytorch/MLP%20Using%20Pytorch.pdf.pdf

* 03/30
    + [CNN.ipynb][IP330]
    + [Video][V0330]
    + [Notes][S0330]

[IP330]: {{colabbaseurl}}/notebooks/07-cnn/CNN.ipynb
[V0330]: {{site.baseurl}}/posts/2023-03-30-video
[S0330]: {{site.baseurl}}/notebooks/07-cnn/CNN.pdf.pdf

### Week 11: CNN

* 04/04
    + [Review][IP404]
    + [Video][V0404]
    + [Notes][S0404]

[IP404]: {{colabbaseurl}}/notebooks/08-review/Midterm%202%20Review.ipynb
[V0404]: {{site.baseurl}}/posts/2023-04-04-video
[S0404]: {{site.baseurl}}/assets/0000-00-15-review/midterm2autograd.pdf.pdf

* 04/06
    + Midterm exam


### Week 12: CNN

* 04/11
    + [Notebook][IP411]
    + [Video][V0411]
    + [Notes][S0411]

[IP411]: {{colabbaseurl}}/notebooks/07-cnn/CNN-0411.ipynb
[V0411]: {{site.baseurl}}/posts/2023-04-11-video
[S0411]: {{colabbaseurl}}/notebooks/07-cnn/CNN-0411.pdf.pdf

* 04/13
    + [Notebook][IP413]
    + [Video][V0413]
    + [Notes][S0413]

[IP413]: {{colabbaseurl}}/notebooks/09-vanishing/VanishingAndExplodingGradients.ipynb
[V0413]: {{site.baseurl}}/posts/2023-04-13-video
[S0413]: {{site.baseurl}}/notebooks/09-vanishing/VanishingAndExplodingGradients-0413.pdf.pdf

### Week 13: Regularization

* 04/18
    + [Video][V0418]
    + [Notes][S0418]

[V0418]: {{site.baseurl}}/posts/2023-04-18-video
[S0418]: {{site.baseurl}}/assets/0000-00-16-dropout-resnets/regularization.pdf

* 04/20
    + [Video][V0420]
    + [Regualization][S0420a]
    + [Resnets][S0420b]

[V0420]: {{site.baseurl}}/posts/2023-04-20-video
[S0420a]: {{site.baseurl}}/assets/0000-00-16-dropout-resnets/regularization-0420.pdf
[S0420b]: {{site.baseurl}}/assets/0000-00-16-dropout-resnets/resnets.pdf


### Week 14: 

* 04/25
    + [Video][V0425]
    + [Transformers][S0425]

[V0425]: {{site.baseurl}}/posts/2023-04-25-video
[S0425]: {{site.baseurl}}/assets/0000-00-17-transformers/transformers.pdf

* 04/27
    + [Video][V0427]
    + [Summarizing][S0427]
 
[V0427]: {{site.baseurl}}/posts/2023-04-27-video
[S0427]: {{site.baseurl}}/assets/0000-00-18-summarizing/summarizing.pdf

<!-- 
## Homework 0

* [{{site.baseurl}}/assets/0000-00-02-prereq-hw/hw0.pdf]()

## Python programming
*  Python: Object oriented programming
*  Python: Functional programming
*  Python: Operator overloading

## Linear algebra review
* Matrix calculus

## Autograd
* Operator overloading and differentiable programming
* Forward differentiation
* Backward differentitation

## Linear models 
* Decision Theory
* Convex optimization

* Perceptron algorithm
* Range and nullspace

* Eigen values and vectors
* PCA (Principal component analysis)
* Least square estimation
* Handling large number of classes

# Probability
* Expectation and Variance
* Transformation of Random variables
* Gaussian distribution and its properties
* Bayesian Classifier
* No free lunch theorem

## Deep Models
* Activation functions
* Vanishing and exploding gradients
* Batch normalization and Dropout
* Artificial Neural networks vs Biological
* Classification using deep models
-->
