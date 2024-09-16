""" Pass by reference vs value
Parameters (arguments) in the Python language can
be passed by reference.
It means if you change what a parameter refers to
w•thin a function, the change also reflects back in
the calling function. """
""" def changename(num):
    num +=10
    print("int modified inside funtion: ",num)
    return
num = 10
print("Original int before function call: ",num)
changename(num)
print("int outside the function after function call: ",num) """
#Function definition is here
""" mylist=[]
def changeme(mylist1):
# This changes a passed list into this function"
    mylist.append(1);
    print ("Values inside the function: mylistl")
    return """
#Function definition is here
def changeme(mylist1):
#"This changes a passed list into this function"
    mylist1.append(1);
    print ("Values inside the function: i'", mylist1)
    return
#Now
mylist=[10,20,30]
print("List ",mylist)
changeme(mylist);
print('List after the function call',mylist)