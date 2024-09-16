x,k=map(int,input().split())
p=input()
p=p.replace('x',str(x))
if(eval(p)==k):
    print(True)
else:
    print(False)