import numpy
a=input().strip().split(' ')
b=numpy.array([],int)
for i in a:
    b=numpy.append(b,int(i))
print(numpy.reshape(b,(3,3)))