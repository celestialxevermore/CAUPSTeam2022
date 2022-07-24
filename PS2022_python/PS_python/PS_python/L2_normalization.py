import math 
import numpy as np 
a = [1,2,3,4,5]
b = [2,3,4,5,6]

res=[] 

for i in range(len(a)):
    res_ = a[i]-b[i]
    res.append(pow(res_,2))


c = np.transpose(b)
print(c.shape)
print(np.transpose(b))

print(np.dot(a,np.transpose(b)))
print(np.dot(a,b))