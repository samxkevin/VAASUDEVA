n=int(input("Enter no. of elements: "))
list1=[]
for i in range(n):
    num=int(input())
    list1.append(num)
print(max(list1))
print(min(list1))