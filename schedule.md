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
| 02/01 | [Slides][S022]      | [🎥][V0202]  | [4][MML2]     | [HW2][HW202]  |
| 02/07 | [Slides][S207]      | [🎥][V0207]  |               |               |
| 02/09 | [Slides][S209]      | [🎥][V0209]  |               |               |
| 02/14 | [Slides][S214]      | [🎥][V0214]  |               |               |
| 02/16 | [Slides][S216]      | [🎥][V0216]  |               |               |
| 02/21 | [Slides][S221]      | [🎥][V0221]  |               |               |
| 02/23 | [Slides][S223]      | [🎥][V0223]  |               |               |
| 02/28 | [Slides][S0228]     | [🎥][V0228]  |               |               |
| 03/07 | [Slides][S0307]     | [🎥][V0307]  |               |               |
| 03/09 | [Slides][S0309]     | [🎥][V0309]  |               |               |


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

[S0309]: {{site.baseurl}}/assets/0000-00-14-prob/023-03-09-Note-15-17.pdf
[V0309]: {{site.baseurl}}/posts/2023-03-07-video

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
