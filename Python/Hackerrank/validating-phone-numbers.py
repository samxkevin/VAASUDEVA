n=int(input())
while(n>0):
    s=input()
    if(len(s)==10 and s.startswith(('7','8','9')) and s.isdigit()):
        print("YES")
    else:
        print("NO")
    n-=1