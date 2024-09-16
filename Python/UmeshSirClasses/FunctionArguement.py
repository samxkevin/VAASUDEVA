""" • Function Arguments
You can call a function by using the follow.ng types
of formal arguments.
• Required arguments
• Kevword arguments
Default arguments
• Var•able-length arguments """
#called values are arguements, objects are parameters...
""" Required arguments: Required arguments
Required arguemets are the arguments passed a function
In correct order
the number of armaments in the function should
e.actl'• the iuncvon definition """
""" def squarerect(sqrec):
    for i in sqrec:
        if(i==1):
            print("square area = ",sqrec[i]*sqrec[i])
        if(i==2):
            print("rectangle area = ",sqrec[1]*sqrec[2])
sr={1:10,2:20}
squarerect(sr) """
""" Keyword arguments

Keyword arguments are related to the function calls. When you use keyword arguments in a function call, the caller identifies the arguments by the parameter name.

• This allows you to skip arguments or place them out of order because the Python interpreter is able to use the keywords provided to match the values with parameters. """
# Function definition is here def

""" def printme(rad):
    import math
#This uses the passed value into this function"

    print("Area = %.2f"%(math.pi*rad*rad)); #Upto 2 deicimal places return;

#Call printme function
printme(22); """
#Order of passing parameter not important

def printinfo(name, age):
#Order of actual & formal parameter not same
    print ("Name: ", name);
    print ("Age", age);
    return;
# Now you can call printinfo function
printinfo(age=50,name="miki");
#Check with default value 35 for age object, and also without the age arguement in last line for printinfo