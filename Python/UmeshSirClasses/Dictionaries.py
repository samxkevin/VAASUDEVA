#myDict={'a':"apple",'b':"boy",3:'Third Class','d':400}
""" c was a procedural rogramming language, Rossum expected that procedural programming languege would not be
much as that of the obeject-oriented programming...
Order of the Dictionsry isn't always same
A dictionary is a data structure or a collection which is
— unordered,
— indexed.
— Changeable or updated and
In Python dictionaries are written with curlybrackets {} and every element is akey and value pair.
1: "First" """
#print(myDict['a'])
#Dictonaries are mutable...
""" myDict['a']="Krishna"
print(myDict["a"])
#note: In a dictionary two keys cannot be same.
myDict={'a':'Application','a':'Krishna'} 
print(myDict["a"])
del myDict['a']
print(myDict)  """
""" myDict={'a':"Apple"}
myDict.clear()
print(myDict) """
""" # Even if you try to add other elements to dictionary:
myDict['a']="Krishna"
print(myDict) """
""" #for iterator and dictionary :Using for iterator print all the key and value elements
for key in myDict:
    print(key, 'corresponds to', myDict[key]) """

""" p={123:100000.00,456:20000.00} 
t=int(input("Enter years"))
r=int(input("enter rate"))
for key in p:
    si1=((p[key])*t*r/100)+p[key]
    print(key,":",p[key],"With",si1)
    #each element is a pair of key and value """
    
""" #get() returns no """    
""" #Declare plants as dictionary
plants = {}
#Add three key-value tuples to the dictionary
plants["onion"] = 4
plants["onion"] = 4 """

""" > Generate Electricity Bill with following scales:
1. Between 0 to 100 @ 2/unit and service Charges 20
2. Between 101 to 200 @ 3/unit and service Charges 30
3. 201 to 300 @ 4/unit and service Charges 40
4. above 300 @ 5/unit and service Charges 50
5. Add sales tax 14%
For example: Bill for 253
Charge for first 100 = 200
Charge for second 100 = 300
Charge for Remaining 53= 212
Total Electricity Bill is: 712+99.68(14% of 712)+40=851.68
prompt the user " Do you want to generate another bill?" if no stop
else prompt the user "Do you want to change the rate "
if yes increase each unit rate by .1 and generate the bill with revised rateelse generate the bill with old rate """

k=1
while(k):
    bill=int(input("Enter No. Of Units Consumed By The User: "))
    i=1
    while(bill%i==0):
        bill-100
        i=i+1
    
    remaining=bill-i*100    

    parts={}
    key=+2

    j=1
    while(j):
        while(i>0):
            parts[key]=100
            key=key+1
            i=i-1
    
        if(i==0):
            parts[key]=remaining

        total=0
        for key, value in parts.items():#To iterate over the key-value pairs in the dictionary, you should use the .items()
            total=total+key*value
    
        lastkey=list(parts.keys())[-1]    
        surf=total+total*(14/100)+(lastkey*10)
        print("Your Electricity Bill is: ",surf,"\n")
        k=input("Do you want to generate another bill?\n")
        l='no'
        if(k=='no'):
            k=0
        else:
            k=1
            l=input("Do you want to change the rate?\n")
            if(l=='yes'):
                print("Rate is increased by 0.1 unit...")
                key=key+0.1
            
        