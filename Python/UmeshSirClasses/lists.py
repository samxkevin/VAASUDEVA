""" #Individual elements can be replaced
#the order of the elements can be changed even after the list has been created
#eg:
listMixed=[1,1.5,'a','KMIT Hyderabad']
print(listMixed)
list=['Ram','Shyam','Ravi','Kishor']
print(list)
listDoubleQuote=["One",'Two',"Three"]
print(listDoubleQuote)  """          
""" items=['First','First','First',1,1.5]
for element in items:
    print(type(element)) """
    
"""append: This method is called upon the list instance (which must not be equal to none)
It recieves value we are adding"""
""" list=[]
list.append(1)#Takes only one arguement
print(list) """
""" insert: An element can be added anywhere in alist.
With insert() we can add to the first part or somewhere in the middle of the list """
#Functions which are associated with a class becomes a method so it must be called as Method first...
""" list=["dot","pearls"]
list.insert(1,"net")
print(list) """
#Extend: A list can be axtended to include another list in a particular list.(Appends list)
""" a=[1,2,3]
b=[4,5,6]
a.extend(b)#use append() check what happens... Curious? append consider the whole list as asingle element...
print(a)
 """ 
#len(): We can know the size of a list using this method
""" animals=[]
animals.append('cat')
animals.append('dog')
count=len(animals)
print(count)
 """
""" items = ['computer',"atlas",1,1.5,",marks"]
if "computer" in items:
    print(1)
if "Atlas" in items:
# This is not reached.
    print(2)
else:
    print(3)
if "marker" not in items:
    print(4) """
"""
sort,reverse. Lists maintain the order of their elements. And they can be reordered.
With the sort method, we change the order of
elements from low to high.
With reverse we invert the current order of the
elements.
"""    
""" list = [1400, 500, 100, 2000]
print(list)
#Use of reverse
list. reverse()
print(list)
# User sort function.
list. sort()
print(list)
# Sorted and reversed.
list. reverse()
print(list) """
""" 
remove():
Remove acts upon a value. It first searches for that value, and then removes it. 
Elements (at an index) can also be removed with the del method, 
This takes away the first matching element in the list.
We can call it multiple times, and it could keep chang.ng the list.
del():
This meanwhile removes elements bv index, or a range of indices. Del uses the slice syntax."""
""" names=["Tommy","Bill","Janet","Bill"]
#Remove this value
names.remove("Bill")
print(names)
#Delete all except first two elements.
print(names)
#Delete all except last elemcnt.
print(names) """