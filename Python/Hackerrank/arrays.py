import numpy
def arrays(arr):
    b=numpy.array([],float)
    i=len(arr)-1
    while(i>=0):
        b=numpy.append(b,float(arr[i]))
        i-=1
    return b
arr=input().strip().split(' ')
result = arrays(arr)
print(result)