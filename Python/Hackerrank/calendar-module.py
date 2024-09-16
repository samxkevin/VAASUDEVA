import calendar
m,d,y=map(int,input().split())
k=calendar.weekday(y,m,d)
if(k==0):
    print("MONDAY")
elif(k==1):
    print("TUESDAY")
elif(k==2):
    print("WEDNESDAY")
elif(k==3):
    print("THURSDAY")
elif(k==4):
    print("FRIDAY")
elif(k==5):
    print("SATURDAY")
else:
    print("SUNDAY")