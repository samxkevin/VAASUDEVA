def printme( str ):
    "This prints a passed string into this function"#docstring
    print(str)
    return
"""#syntax of a function
def functjonname( parameters ):
    "function_docstring"
    function_suite
    return(expression) """
""" #Defining a function:
def process():
    "Add two numbers"
    a=b=10
    print("Sum: %(a+b)")
#Calling a function
process() """ 
""" def process(a,b,c,d,e):
    s=a+b+c+d+e
    print("Sum:",s)
    return
    
x=process(3,3,3,3,3)
print(x) """
#location of call is very critical in python the code must be first defined before calling...

""" import math
def process(a,b):
    aa=math.sin(a)
    bb=math.sin(b)
    cc=math.sin(aa)
    dd=math.floor(bb)
    print("sin:",aa)
    print("cos:",bb)
    return cc,dd

x=process(90,120)
print(x)
print(type(x)) """
""" x = "global"
def foo():
    print("x inside :", x)
    x=x+"local"
foo()
print("x outside:", x) """
""" x = "global"
def foo():
    y=" local var"
    print("inside foo x, y")
x=x+" non local"
foo()
print("x outside:", x) """

""" k=1
a=int(input("Value of a: "))
b=int(input("Value of b: "))
def addtwonums():  
    print(a,"+",b,"=",(a+b))
def substract():
    print(a,"+",b,"=",(a-b))
print("""
#1. a+b
#2. a-b
#3. Quit      
""")
while(k):
    i=int(input("Pick your Option: "))
    if(i==1):
        addtwonums()
    elif(i==2):
        substract()
    else:
        quit() """

""" studentsBook=[]
def addApersonToTheStudentsBook():
    FirstName=input("Please enter the first name: ")
    LastName=input("Please enter the last name: ")
    q=1
    while (q):
        PhNo=input("Enter your Phone Number: ")
        if len(PhNo)==10 and PhNo.isdigit():
            q=0
        else:
            print("Phone number comprises of 10 digits enter a valid phone number...")
    List=[FirstName,LastName,PhNo]
    studentsBook.append(List)
    print("Added the details to the Students Book...")
def findApersonByLastName():
    SearchItem=input("Enter the Last Name you want to search: ")
    for index,person in enumerate(studentsBook):
        if person[1]==SearchItem:
            print("Found",SearchItem,"in the Students Book.")
            break
        else:
            print(SearchItem,"not found...")
while(len(studentsBook)==0):
#     print("""#The Students Book is for now empty... 
# So you have to add atleast one entry""")
#     addApersonToTheStudentsBook()
# def Quit():
#     exit()
# print("""
# Options:
# 1. Look up person by last name
# 2. Add a person to the students book
# 3. Quit
# Please Pick your Option...
""")
k=1
while(k):
    i=int(input("Pick your Option: "))
    if(i==1):
        findApersonByLastName()
    elif(i==2):
        addApersonToTheStudentsBook()
    else:
        # print("""#Quitting...
        # You have now opt out from the prompt.
        #""")
        #Quit() """
