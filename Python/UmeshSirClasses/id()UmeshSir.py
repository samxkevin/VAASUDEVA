""" id() address of a variable can be known all objects are reference type(remembers address) so in python the objects are immutable
b=10
b1=10
print("Addr of b ",id(b),"Addr o b1",id(b1))
b1=100
print("Addr of b",id(b),"Addr of b1",id(b1))
#reference is stored as octel but is shown as long int
 """
#string constant pool: if the constant string is same then one allocation is given to n strings
""" 
str1="hello"
str2='hello'
str3='Hello'
print("id of str1",id(str1),"id str2",id(str2),"id str3",id(str3)) """
""" 
counter=100
max=counter """


str = "kmit"
str1 = "kmit"
print(id(str))
print(id(str1))
a = 10
print(id(a))
a+=1
print(id(a))