import numpy
n,m=map(int,input().split())
c=list(map(int,input().split()))
d=list(map(int,input().split()))
e=numpy.array([c,d])
print(numpy.transpose(e).reshape(n,m))
print(e.flatten())//Try again