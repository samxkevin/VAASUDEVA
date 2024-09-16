n=int(input())
arr=[]
while(n>0):
    l=input()
    arr.append(l)
    n-=1
arr2=[]
for i in range(1,len(arr)+1):
    arr2.append(arr[-(i)])
print(arr2)