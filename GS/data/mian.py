import pandas as pd
import seaborn as sns 
from sklearn.model_selection import train_test_split
from sklearn.ensemble import GradientBoostingClassifier
import matplotlib.pyplot as plt
from sklearn.metrics import accuracy_score

def split_dataset(dataset, train_percentage, feature_headers, target_header):
    """
    Split the dataset with train_percentage
    :param dataset:
    :param train_percentage:
    :param feature_headers:
    :param target_header:
    :return: train_x, test_x, train_y, test_y
    """
 
    # Split dataset into train and test dataset
    train_x, test_x, train_y, test_y = train_test_split(dataset[feature_headers], dataset[target_header],
                                                        train_size=train_percentage)
    return train_x, test_x, train_y, test_y

def random_forest_classifier(features,target):
	clf=GradientBoostingClassifier(n_estimators=200,max_depth=3);
	clf.fit(features,target)
	return clf

df = pd.read_csv("train.csv")
df2= pd.read_csv("test.csv" ,header=None)
HEADERS = list(df.columns.values)
train_x, test_x, train_y, test_y = split_dataset(df, 0.7, HEADERS[0:-1], HEADERS[-1])
trained_model = random_forest_classifier(train_x,train_y)
predictions = trained_model.predict(test_x)
print "Train Accuracy :: ", accuracy_score(train_y, trained_model.predict(train_x))
print "Test Accuracy  :: ", accuracy_score(test_y, predictions)
prediction1= trained_model.predict(df2)
print prediction1
df3 = pd.DataFrame(prediction1)
df3.to_csv('prediction.csv', index=False, headers=True ,columns=None ,encoding='utf-8',sep='\t')
# print " Confusion matrix ", confusion_matrix(test_y, predictions)