from itertools import combinations_with_replacement
s,k=map(str,input().split())
l=list(s)
l.sort()
k=int(k)
krishna=list(combinations_with_replacement(l,k))
krishna.sort()
for _ in krishna:
    for i in _:
        print(i,end="")
    print()