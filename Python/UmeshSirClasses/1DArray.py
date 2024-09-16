""" ID Arrays
• A data structure is a way to organize data that we wish
to process with a computer program.
• A one-dimensional array (or array) is a data structure
that stores a sequence of (references to) objects.
• We refer to the objects within an array as its elements.
• The method that we use to refer to elements in an
array is by indexing them.
If we have n elements in the sequence, we think of
them as being numbered from 0 to n - 1.
The elements of array comma-separated literals(constants)
between matching square brackets. """
"""
import array
array_name=array.array('type code',[elements])
"""
#"Go from generalization to specialization"
#arrayName=array(typecode,[initializers])
#"* is called as wildcard all the functions, methods should get imported in the code"
""" from array import *
arr1=array("i",[10,20,30,40,50])
for x in arr1:
    print("Type of x",type(x),"address of x",id(x))
    print("Value at x",x) """
""" print(arr1[0])#accesing arrray elements
print(arr1[1]) """
"""
Insertion Operation
Insert operation is to insert one or more data
elements into an array.
Based on the requirement, a new element can be
added at the beginning, end, or any given index of
array.
Example
Here, we add a data element at the middle of the
array using the python in-built insert() method.
"""
""" from array import *
array1=array('i',[10,20,30,40,50])
for x in array1:
    print(x)
array1.insert(1,60)
print(array1[1]) """
"""
Deletion Operation
Deletion refers to removing an existing element
from the array and re-organizing all elements of an
array.
"""
#signed means both positive and negitive, but unsigned only positive
"""
Search Operation
You can perform a search for an array element
based on its value or its index.
Example
Here, we search a data element using the python
in-built index() method.
"""
""" from array import *
array1 = array('i', [10,20,30,40,50])
if 40 in array1:
    print ("found at index %d" %(array1.index(40))) """