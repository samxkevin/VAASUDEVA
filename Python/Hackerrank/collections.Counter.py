from collections import Counter
n=int(input())
l=list(map(int,input().split()))
c=Counter(l)
ns=int(input())
v=0
count=0
while(ns>0):
    k,p=map(int,input().split())
    if(k in c and c[k] > 0):
        v=v+p
        c[k]-=1
    ns-=1
print(v)