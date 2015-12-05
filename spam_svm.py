import csv as csv
import numpy as np
from sklearn.svm import LinearSVC 

csv_file = csv.reader(open('final.csv'))
header= csv_file.next()

data = []

for row in csv_file:
	data.append(row)

data = np.array(data)

xtrain = data[1:5000,0:54].astype(np.float)
ytrain = data[1:5000,54].astype(np.int)
xtest = data[5100:5172,0:54].astype(np.float)
ytest = data[5100:5172,54].astype(np.int)

clf= LinearSVC(C=150).fit(xtrain, ytrain)
clf.coef_
clf.intercept_
p = map(clf.predict,xtest)
print ('test actual values',ytest)
print

score1="spam"
score2="ham"

index=0
arr=[]

for index in range(len(p)):
	if p[index]>0:
		print 'Email no.',index+1,',prediction is ',score1	
	else:
		print 'Email no.',index+1,',prediction is ',score2
	arr.append(p[index][0]-ytest[index])
	
#print type(p[0])
 
 #MAPE value
arr=np.abs(arr)
print arr
error=21.21
count=(np.count_nonzero(arr))+0.0
length=len(p)+0.0
error=((length-count)/length)*100
print 'Accuracy in classification task was ',error,'%'