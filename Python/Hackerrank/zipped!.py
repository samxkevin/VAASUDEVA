t,n=map(int, input().split())
lista=[]
while(n>0):
    a=list(map(float,input().split()))
    n-=1
    lista.append(a)
zipa=zip(*lista)
for _ in list(zipa):
    print(sum(_)/len(_))