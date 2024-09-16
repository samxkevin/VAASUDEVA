a=set(list(map(int, input().split())))
n=int(input())
cnt=0
for i in range(n):
    b=set(list(map(int,input().split())))
    if(b.issubset(a) and b!=a):
        cnt+=1
if (cnt==n):
    print(True)
else:
    print(False)