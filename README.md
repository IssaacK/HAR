Title: Prediction of Health Condition using Human Activity Recognition

Introduction: The project includes prediction of human activity based on data received from HAR sensors and using this data to predict the physical health condition or lifestyle of a person.

Features: 
1. Predicting the activity of a person from Sensor data using various classification models
2. Using the predicted data of the classification model to predict the relative physical activity (health index) of a person via a regression model

Usage: The project can be used as a platform to extend to various other sensor information and include more features (health history, age and so on) from the subject and can be used to calculate the Heath condition of the person. The project explains a way to predict the health condition using the sensor data.

Dataset: There are 2 data sets in this project
1. HAR sensor data used to predict the action or activity of the person at a particular moment
2. The predicted activity from the classification model is grouped by activity over a duration (24 hours) synthetically

Architecture:
1. HAR_DataSet.zip - Dataset used for classification (https://www.kaggle.com/code/fahadmehfoooz/human-activity-recognition-with-neural-networks/input)
   
2. generate_synthetic_data.c - Code to generate synthetic datset capturing the duration of each activity of a person in 24 hours
   
3. HAR_Classification.ipynb - Code to classify the activity of a person

4. HAR_Regression.ipynb - Code to predict health index based on activity duration of a person

5. HAR_Classification_Regression_Report.pdf - Consolidated report capturing all the project tasks like data munging, classification models and comparison of results, regression models and comparison of results etc.

6. HAR_Presentation.pdf - Presentation of the overall work
