#18-05-2024
"""
Today I Learnt how to use eval() in python it can take strings as input and evaluate them as algebraic 
expressions by replace the variables with some integer value such as 2.
Example: 
"""
""" x=int(input())
p=input()
p=p.replace('x',str(x))
print(eval(p)) """
#give a number as input in the first line and algebraic expression in another... we will get p(x)as the output
#19-05-2024
""" 
Today I learnt about the calendar module in the Python library from and I have done a problem in HackerRank
regarding that. I understood that we have to first import the calendar module and we can use functions such
as calendar.weekday(y,m,d) to know the index of the weekday (monday is set to index 0) and 
calendar.setweekday(y,m,d) to set your desired weekday as position zero etc., pls refer the links given
below:
"""
#https://www.hackerrank.com/challenges/calendar-module/problem?isFullScreen=true
#https://docs.python.org/2/library/calendar.html#module-calendar
#20-05-2024
"""
Today I learnt about the .issubset() function in sets python library. It check whether a certain set is
subset of another. The Smaller set is but in the front or attributed in the beginning and the bigger set is
put in the parenthesis. Found this from a HackerRank Problem... Link given below.
"""
#https://www.hackerrank.com/challenges/py-check-strict-superset/problem?isFullScreen=true
""" To be frank chatgpt helped me to get this it also showed a way to debug codes by using print
statements which I used to do too... but its more structured and formatted want to mention that too here.
"""
""" a = set(map(int, input().split()))  # Read set A
n = int(input())  # Number of other sets

is_strict_superset = True  # Assume A is a strict superset initially

for _ in range(n):
    b = set(map(int, input().split()))  # Read each set B
    # Check if B is a subset of A and A is not equal to B
    if not (b.issubset(a) and a != b):
        is_strict_superset = False  # If any set B fails the condition, A is not a strict superset
        break

print(is_strict_superset)  # Print the result
 """
#21-05-2024
""" 
Today I learnt about cmath module in Python... and functions like (abs(complex(a,b))) where complex number 
z=a+ib and cmath.phase(complex(a,b)), attributions such as z.real and z.imag. I also learnt about the 
product() method in itertools module. It return the cartesian product of two sets if they are given as
arguements for that function or method. I also learnt about the permutation() method in itertools module
what it does is it takes a set or an iterable object and selects elements in different order or arrangements
according to the set and number you gave as arguements for the method. Same for itertools.combinations it 
just selects and doesn't consider the order or arrangement. Also learnt about 
itertools.combinations_with_replacement() method in itertools module which has repetition allowed and order 
doesn't matter.
"""
#22-05-2024
""" 
The in check might not be complicated for us but they can be complicated for the interpretor especially in
the case of conditional statements.
"""
#24-05-2024 In the gap, I was with problem solving in cpp.
""" 
Today I learnt about zip() method in Python Built-Ins. The zip() function creates a list of tuples. The ith 
tuple contains the th element from each of the argument sequences or iterables. If the argument sequences
are of unequal lengths, then the returned list is truncated to the length of the shortest argument sequence.
From hackerrank... refer the link given below 
https://www.hackerrank.com/challenges/zipped/problem?isFullScreen=true
Also learnt about ternary in Python...(Guess how to write it out... its easy) 
"""
#30-05-2024 In the gap, I was in Kurnool...
"""
Today I learnt about the re.split() method in Regex and Parsing. The re.split() expression splits the string by
occurrence of a pattern. https://www.hackerrank.com/challenges/re-split/problem.
"""
#01-06-2024
""" 
.startswith(),.isdigit(),.isalnum(),.isalpha(),set and repetetion of a character, 
"""
#Sathvik's rock, paper, scissors code...
""" import random
uc = int(input("enter 0 for rock , 1 for paper , 2 for scissors: "))
print(f"user choice : {uc}" )
if uc >= 3 or uc < 0:
    print("invalid , hence you lose")
else:
    cc = random.randint(0, 2)
    print("computer choice : ")
    print(cc)
    if uc == cc:
        print(" its a draw ")
    elif uc == 0 and cc == 2:
        print(" You win ")
    elif uc == 2 and cc == 0:
        print(" You lose ")
    elif uc > cc:
        print(" You win ")
    elif uc < cc:
        print(" You lose ") """
""" n=input()
lst=list(map(int,input().split()))
l1=lst
l1.sort()
l1.reverse()
while(len(l1)>3):
    l1.pop()
l2=["Champion","RunnerUp-1","RunnerUp-2"]
k=0
for i in l1:
    j=lst.index(i)
    lst.remove(i)
    lst.insert(j,l2[k])
    k+=1
print(lst) """
""" smthng=input()
k=int(smthng.split()[1])
s=input()
des=''
for char in s:
    if(des.count(char)<k):
        des+=char
print(des) """
""" smthng=input()
k=int(smthng.split()[1])
s=input()
l1=[]
for char in s:
    l1.append(s.count(char))
l1=set(l1)
for _ in l1:
    for char in s:
        if(_<=k):
            print(char,end="") """
""" l1=list(map(int,input().split()))
mi=l1[0]
ma=0
for _ in l1[1:]:
    mi=min(mi,_)
    pro=_-mi
    ma=max(ma,pro)
print(ma) """
""" a=[10,5,6,7,9]
b=sorted(a)
champ=b[-1]
run1=b[-2]
run2=b[-3]
ind1=a.index(champ)
ind2=a.index(run1)
ind3=a.index(run2)
a.remove(champ)
a.remove(run1)
a.remove(run2)
a.insert(ind1,"champion")
a.insert(ind2,"runner-up1")
a.insert(ind3,"runner-up2")
print(a) """
""" n=int(input())
l1=list(map(int,input().split()))
l2=[]
sum=0
for _ in l1:
    if(_==2):
        sum+=1
    else:
        sum=0
    l2.append(sum)
print(max(l2)) """
l1=list(map(int,input().split("")))
l2=list(map(int,input().split("")))
sum=0