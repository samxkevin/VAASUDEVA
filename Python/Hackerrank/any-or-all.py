n=int(input())
a=list(map(str, input().split()))
print(True) if(all(int(_)>0 for _ in a) and any(_==_[::-1] for _ in a)) else(print(False))