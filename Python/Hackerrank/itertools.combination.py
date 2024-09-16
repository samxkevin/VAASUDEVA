from itertools import combinations
s,k=map(str,input().split())
l=list(s)
l.sort()
k=int(k)
for j in range(1,k+1):
    krishna=list(combinations(l,j))
    krishna.sort()
    for _ in krishna:
        for i in _:
            print(i,end="")
        print()