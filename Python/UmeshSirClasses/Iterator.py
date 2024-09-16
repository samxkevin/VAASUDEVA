#filter(),map(),reduce()
""" filter() in python
• The filter() method filters the given sequence with the help of a function that tests each element in the sequence to be true or not.
The filter() method in Python has the following syntax:
• Syntax: filter (function, sequence) """
""" ages=[5, 12, 17, 18, 24, 32]
def myFunc(x):
    if x<18:
        return False
    else:
        return True
adults=filter(myFunc,ages)
for x in adults: 
    print(x) """
