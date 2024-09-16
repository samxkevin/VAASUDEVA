n=int(input())
while(n>0):
    try:
        a,b=map(int,input().split())
        print(a//b)
    except ZeroDivisionError as e:
        print("Error Code:",e)
    except ValueError as e:
        print("Error Code:",e)
    n-=1