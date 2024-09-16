""" #LOOPS in PYTHON
There are three types of constructs in most of the languages.
general. statements arc executed sequentially: The first
statement in a program is executed first, followed by the
second, and so on .
Branching construct: If a certain condition is satisfied then a
block of code rollouing it is executed other "ise that block of
code is skipped.
+ There may be a situation when you need to execute a block of
code several nutnber of times.
*Looping Construct: A loop statement allows us to execute a
statement or group or statements multiple times.
*Programming languages provide various control structures
that allow for lnore complicated execution paths. 
A loop statclnent allmvs us to execute a
statejnent or group of statements multiple times.
Thc following diagrarn illustrates a loop
staterncnt."""
#While loop
""" count=0
while (count<5):
    print('The count  is: ',count)
    count=count+1
print("Executed While") """

""" name='Ravi'
percentage=78
print('Name %s percentage %d'%(name,percentage)) """
""" i=1
while(i<11):
    n=(int(input("Enter your number")))
    product=n*i
    print("%d X %d  = %d"%(n,i,product))
    i=i+1 """
""" #Armstrong number
Exercise 2: Solution

num = int(input("Enter a number: "))

sum = 0

temp = num

while temp > 0:

digit = temp % 10

sum = sum+digit ** 3

temp = temp//10

if num == sum:
print(num, "is an Armstrong number")
else:
    print(num, "is not an Armstrong number")

 """
""" n=int(input("Enter n: "))
f=1
i=1
while(i<=n):
    f=f*i
    i=i+1
print("The factorial of %d is %d"%(n,f))    """
#Break and Countinue statements are unconditional
#print statement by default ends with a new line to stop that,
""" print("1", end ="")
print("2", end =" ")
print("3", end =' ')
print("4", end =' ')
print("5", end ='')
print("6", end =' ')
print(7)
print(8) """
""" import math
print("Trig", end ="   ")
print("0", end ="    ")
print("15", end ="    ")
print("30", end ='      ')
print("45", end ='       ')
print("60", end ='       ')
print("75", end ='       ')
print("90")
n=0
print("sin",end='   ')
while(n<=90):
    print("%.2f"%(math.sin(n)),end='   ')
    n=n+15
print(" ") 

print("cos",end='   ')
n=0
while(n<=90):
    print("%.2f"%(math.cos(n)),end='   ')
    n=n+15
print(" ")    

print("tan",end='   ')
n=0
while(n<=90):
    print("%.2f"%(math.cos(n)),end='   ')
    n=n+15 
print(" ")   """