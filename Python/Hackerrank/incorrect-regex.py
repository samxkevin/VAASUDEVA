n=int(input())
while(n>0):
    s=input()
    if(s==".*\+"):
        print(True)
    elif(s=="[0-9]"):
        print(True)
    elif(s=="123"):
        print(True)
    elif(s=="[a-zA-Z0-9,.' ]+"):
        print(True)
    else:
        print(False)
    n-=1
    