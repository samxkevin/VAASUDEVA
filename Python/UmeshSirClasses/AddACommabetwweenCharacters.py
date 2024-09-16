""" s=input()
list1=list(s)
s1=','.join(list1)
print(s1) """
""" s=input()
list1=list(s)
for ele in list1:
    if(ele=='an'):
        list1.remove(ele)
s1=''.join(list1)
print(s1) """
""" s=input()
s2=s.replace('an','')
print(s2) """
lis=[10,34.5,"abc",1,67,1,10,"cd","abc",10]
set1=set(lis)
list1=list(set1)
print(list1)