students=[]
marks=[]
num=int(input("Enter the number of students: "))
for i in range(num):
    name=input("Enter student name: ")
    students.append(name)
    Marks=[]
    for i in range(3):
        mark=int(input(f"Enter {name}'s mark {i + 1}: "))
        Marks.append(mark)
    marks.append(Marks)
    avgs=[]
for i in range(num):
    total= sum(marks[i])
    avg= total/len(marks[i])
    print(f"{students[i]}'s sum of marks: '{total}")
    print(f' Average of the student is:{avg:.2f}')
    avgs.append(avg)
    
maxavg=max(avgs)
indexofmaxavg=avgs.index(maxavg)
print("The highest average marks",maxavg,"and the student possesing it is",students[indexofmaxavg])
