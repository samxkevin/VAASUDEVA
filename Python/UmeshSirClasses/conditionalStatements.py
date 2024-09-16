#elif block (elif considers one condition only, but if can be taken for any number of conditions)

mark=int(input("Enter Mark obtained:"))
if mark>=70:
    print('A Grade')
elif mark >= 60:
    print('B Grade')
elif mark >= 50:
    print("C Grade")
else:
    print('Failed')
#colons are important and indentation as well
    
""" x=0
if(x):
    {
        print('x=0')
    }    
else:
    print('x!=0')    #because there is no condition(in if) else block is executed """

""" x=' '
if(x):
    print("1")
else:
    print("2") #non zero values (values which aren't 0 & None) are considered as true
 """


