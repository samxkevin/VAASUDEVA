""" from array import *
T = [[11, 12, 5, 2], [15, 6,10], [10, 8, 12, 5],[12,8,15,6]]
print("original array")
for r in T:
    for c in r:
        print(c,end=" ")
    print()
del T[2]
print("after deleting")
for r in T:
    for c in r:
        print(c,end=" ")
    print() """
""" arr1=array('i',tup1)
arr2=array('i',list1)
for i in arr2:
    arr1.append(i)
print(arr1)
print(type(arr1)) """
"""#Combining a list and tuple into an array 
from array import *
tup1=(1,2,'l')
list1=[4,5,6]
try:
    arr1=array('i',tup1)
except:
    print("Check if all elements in the tuple are same and edit accordingly...")
    exit()
try:
    arr2=array('i',list1)
except:
    print("Check if all elements in the list are same and edit accordingly...")
    exit()
def convert(tuple,list):
    for i in arr2:
        arr1.append(i)
    print(arr1)
convert(tuple==tup1,list==list1)"""
from array import *
i=int(input("Rows: "))
j=int(input("Columns: "))
list1=[]
list2=[]
list3=[]
for n in range(0,i-1):
    q=int(input("Enter 1st column values:"))
    list1.append(q)
    n+=1
for n in range(0,i-1):
    w=int(input("Enter 1st column values:"))
    list2.append(q)
    n+=1
for n in range(0,i-1):
    e=int(input("Enter 1st column values:"))
    list3.append(q)
    n+=1
arr1=array('i',list1)
arr1=array('i',list2)
arr3=array('i',list3)