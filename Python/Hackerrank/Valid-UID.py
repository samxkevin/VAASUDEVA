n=int(input())
while(n>0):
    s=input()
    set_s=set()
    cntupper=0
    cntdigit=0
    surf=0
    for i in s:
        if(i.isupper()):
            cntupper+=1
        if(i.isdigit()):
            cntdigit+=1
        if(not(i.isalnum()) or i in set_s):
            print("Invalid")
            surf=1
            break
        set_s.update(i)
    if(surf==0):
        if(cntupper>=2 and cntdigit>=3):
            print("Valid")
        else:
            print("Invalid")
    n-=1