#Tuples are used to store multiple items in a single variable, a sequence of immutable python objects. They are sequences like lists(mutable).
#Data Structure: Arranging data in a manner for simplicity and efficiency
#lists use square brackets... but tuple use parenthesis...
#Tuple, list, set, dictionary are built-in data types(class).
#values seperated by commas
""" #example
tup1='a','b','c'#or
tup2=('a','b','c')#put print and check """
#tuple can also have zero and dissimilar data type
#one element:(suggested, indication)
# x=(1,)#not 1+2
tup1='a','b','c'
""" if(tup1):
    print("tup(0) ",tup1[0])
    print("tup(0) ",tup1[0:2])
else:
    print('tup1(0) does not exist') """
#execute the above to understand         
""" x=(1,)
if (x):
    print('x = ()')
else:
    print('x!=0') """

""" pair=('dog','cat')#packing
(one,two)=pair#unpacking
print(one)
print(two) """

""" • Add, multiply.

A tuple is not a number. But it can be added to or multiplied.

By adding two tuples, they are concatenated. One is put after the other.

And:By multiplying a tuple with a number, we add the tuple to itself a certain number of times.

Divide, subtract. We cannot divide or subtract tuples. """
checks = (10, 20, 30)# Add two tuples.

more = checks + checks

print(more)#Multiply tuple.

total = checks * 3

print(total)