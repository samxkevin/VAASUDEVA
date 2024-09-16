from itertools import permutations
s,k=map(str,input().split())
k=int(k)
krishna=list(permutations(s,k))
krishna.sort()
for _ in krishna:
    for i in _:
        print(i,end="")
    print()