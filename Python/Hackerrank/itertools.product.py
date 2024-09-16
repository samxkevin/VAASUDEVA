from itertools import product
a=set(list(map(int,input().split())))
b=set(list(map(int,input().split())))
krishna=list(product(a,b))
for _ in krishna:
    print(_,end=" ")