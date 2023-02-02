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
| 02/02 | [Slides][S022]      | [🎥][V0131]  | [4][MML2]     | [HW2][HW202]  |


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
    
* 02/01
   + [LinearModels2.pdf][S022]
   + [PlaneFitProblem.ipynb][HW202]
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
[HW202]: https://mybinder.org/v2/gh/wecacuee/ECE490-Neural-Networks/HEAD?labpath=notebooks%2F02-linear-models%2FPlaneFitProblem.ipynb
[V0202]: {{site.baseurl}}/posts/2023-02-02-lm2-video

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
