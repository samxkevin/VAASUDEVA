""" for letter in 'python':
    print(letter,end='')
    #in checks whether the letter given is not null

#asignment operator is not equal to
    
for letter in 'python':
    if letter=='h':
        break
    print('current letter:',letter)
print('current letter:',letter)    

#in is a membership operator

#in python iterator but in c loop

 """

""" for ch in 'python':
    if ch=='p':
        continue
    else:
        print('This character is not "p"')      """

""" mystr="ram rahim and robert"
i=0
j=0
for letter in mystr:
    if(letter=='r'):
        i=i+1
    elif(letter=='a'):
        j=j+1
print(i)    
print(j) """

""" i=int(input("Enter a number:"))
while(i>0):
    print('*'*i)
    i=i-1
    #* concatenates no. of times given """

""" num = int(input("Pattern of how many lines?")) 
for n in range(1,num+1):
    print('*' *n) """

#else can be used for for too
""" Write a code to get Ramanujan Number using while loop.Ramanujan Numbers are the numbers that can be expressed as sum of two cubes in two different ways. Therefore, Ramanujan Number (N) = a3 + b3 = c3 + d3. Explanation: The number 1729 can be expressed as
1*3 + 12*3 = 1729
9*3 + 10*3 = 1729 """ 

""" for a in range(1,100):    
    for b in range(a+1,100):   
        for x in range(1,100):
            for y in range(x+1,100):
                if(a!=b and b!=x and x!=y and a!=y and b!=y):
                    Ramanujan_number1=(a**3 + b**3)
                    Ramanujan_number2=(x**3 + y**3)
                    if(Ramanujan_number1 == Ramanujan_number2):
                        print(a,b,x,y)
                        print(Ramanujan_number1,"is a Ramanujan Number")  """
rows=5
i=1
while(rows>0):
    for i in range(rows):
        print(str(rows),end=" ")
        i-=1