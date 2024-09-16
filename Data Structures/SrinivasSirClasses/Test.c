/*
Most Important Concepts in DS:
1. The Switch Case
2. The Do-While Loop
3. Functions
4. Structures
5. Dynamic Memory Allocation
6. Arrays
7. etc.,
*/
//Examples For Each Concept:
//The Switch Case:
/* #include<stdio.h>
int main(){
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    int option;
    printf("Choose an operation (1-4 and others ):\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&option);
    printf("You have chosen the operation '%d'\n",option);
    switch(option){
        case 1:{
            printf("Sum of the numbers = %d\n",a+b);
            break;
        }
        case 2:{
            printf("Difference of the numbers = %d\n",a-b);
            break;
        }
        case 3:{
            printf("Product of the numbers = %d\n",a*b);
            break;
        }
        case 4:{
            printf("Division of the numbers = %f\n",a/b);
            break;
        }
        default:{
            printf("exitting from the code.\n");
            return 0;
        }
    }
    return 0;
} */
//Remember: You can use the exit(1) function when you have added the pre-processor directive "stdlib.h" to the code in the 1st line.
/*
The pre-processor directives can also be added to the code using "" and not only the <> operators.
Generally, The "" is used when we are including user defined header files and <> is used when we are including pre-defined header files to the code.
*/
/*
//The Do-While Loop:
/* #include<stdio.h>
int main(){
    int i=0;
    do{
        printf("Hello World!\n");
        i++;
    }while(i<5);
    return 0;
} */
//Functions
/* #include<stdio.h>
int main(){
    int twosum(int a,int b);
    int a=10,b=20;
    printf("%d\n",twosum(a,b));
    return 0;
}
int twosum(int a,int b){
    int sum=a+b;
    return sum;
} */
//Structure
/* #include<stdio.h>
int main(){
    struct student{
        char name[50];
        int age;
        float marks;
    };
    struct student s1;
    printf("Enter the name of the student: ");
    scanf("%s",s1.name);
    printf("Enter the age of the student: ");
    scanf("%d",&s1.age);
    printf("Enter the marks of the student: ");
    scanf("%f",&s1.marks);
    printf("Name: %s\nAge: %d\nMarks: %.2f\n",s1.name,s1.age,s1.marks);
    return 0;
} */
//Dynamic Memory Allocation
/* #include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed.\n");
        return 0;
    }
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements in the array are: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
} */
//Arrays
/* #include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("Elements in the array are: ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
} */
/*
Stack Operations:
1. Insertion
2. Deletion
3. Display(Peek)
4. Check if Stack is Empty or Full
Stack can be created using two Data structures:
1. Using Arrays
2. Using Linked Lists
*/

//Stack Using Arrays:

//Including the required header files
#include<stdio.h>
#include<stdlib.h>

//Define the maximum size of the Stack
#define MAX 5//Defining a preprocessor macro.

//Declarations for Stack and Global Variables...
int stack[MAX];
int top=-1,data,i;

//Function Declarations For Various Operations...
void insertion();
void deletion();
void display();
void isEmpty();
void isFull();

//Function Definitions For Various Operations...
void insertion()
{if(top==MAX-1){
        printf("Stack overflow \n");
    }else{
        top=top+1;
        printf("Enter data to insert \n");
        scanf("%d",&data);
        stack[top]=data;
        printf("data inserted successfully \n");
    }
}

void deletion()
{if(top ==-1){
       printf("statck is empty \n");
   }else{
       top = top-1;
       printf("element deleted successfully \n");
   }
}

void display()
{if(top==-1){
        printf("Stack is empty \n");
    }//Small query
    printf("Stack Data \n");
    for(i=top;i>=0;i--) 
    {
        printf("%d \n",stack[i]);
    }
}

void isEmpty()
{if(top==-1){
        printf("Statck is empty \n");
    }else{
        printf("stack contains data \n");
    }
}

void isFull()
{if(top==MAX-1){
        printf("stack is full \n");
    }else{
        printf("stack is having space \n");
    }
}

//Main block
int main()
{
	int ch;//User Choice for the switch case.
	do
    {
        printf("Stack operations \n");
        printf("1.insertion \n 2.deletion \n 3.display \n 4.isEmpty \n 5.isFull \n 6.Quit \n");
        printf("Please enter your Choice \n");
        scanf("%d",&ch);
        switch(ch)//switch case is executed taking the user choice variable as a parameter.
        {
            case 1:
                insertion(); //function call- for executing the operation chosen by the user.
                break;
            case 2:
                deletion();
                break;
            case 3:
                display();
                break;
            case 4:
                isEmpty();
                break;
            case 5:
                isFull();
                break;
            case 6:
                exit(0);
            default:
                printf("Quitting...\n");
                break;
        }
    }while(ch!=6);
	return 10;
}

//Exercise:
//Write a c program to implement stack operation using arrays
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1,data,ch;
void insertion();
void deletion();
void display();
void isFull();
void isEmpty();
void insertion(){
    if(top==MAX-1){
        printf("Stack Overflow\n");
    }
    else{
        printf("Enter The Data to insert\n");
        scanf("%d",&data);
        top++;
        stack[top]=data;
        printf("Data inserted successfully.\n");
    }
}
void deletion(){
    if(top==-1){
        printf("Stack Underflow\n");
    }
    else{
        top--;
        printf("Data Deleted Successfully\n");
    }
}
void display(){
    if(top==-1){
        printf("Stack Underflow\n");
    }else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
void isFull(){
    if(top==MAX-1){
        printf("Stack Overflow\n");
    }
}
void isEmpty(){
    if(top==-1){
        printf("Stack Underflow\n");
    }
}
int main()
{   
    do{
    printf("Stack Operations\nEnter Your Choice:\n1.Insertion\n2.Deletion\n3.Display\n4.Check if the stack full\n5.Check if the Stack empty\n6.Empty\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            isFull();
            break;
        case 5:
            isEmpty();
            break;
        default:
            printf("Enter a number between 1-6\n");
            break;
    }
    }while(ch!=6);
    return 0;
}
//Similarly For
//QUEUE:

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1,rare=-1,i,data;
int queue[MAX];
void insertion();
void deletion();
void display();
int main()
{
	int ch;
	do
	{
	printf("Queue Operations\n1.Insertion\n2.Deletion\n3.Display\n4.Quit\n");
	printf("Enter an option");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insertion();
			break;
		case 2:
			deletion();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("Enter between 1-4\n");
	}
	}while(ch!=4);
	return 0;
}
void insertion()
{
    if(rare==MAX-1)
    {
        printf("Queue is full\n");
    }
    else if(front==-1 && rare==-1)
    {
        front=front+1;
        rare=rare+1;
        printf("enter data to insert:\n");
        scanf("%d",&data);
        queue[rare]=data;
        printf("data inserted successfully\n");

    }
    else{
        rare=rare+1;
        printf("enter data to insert:\n");
        scanf("%d",&data);
        queue[rare]=data;
        printf("data inserted successfully\n");

    }
}
void deletion()
{
    if (front==-1 && rare==-1)
	{  // Check if the queue is empty
        printf("Queue is empty\n");
    } 
	else if (front==rare)
	{  // Only one element left in the queue
        printf("Deleted element: %d\n", queue[front]);
        front=rare=-1;  // Reset front and rare to indicate an empty queue
    } 
	else
	{
        printf("Deleted element: %d\n", queue[front]);
        front=front+1;  // Move front to the next element in the queue
    }
}
void display() 
{
    if (front==-1 && rare==-1)
	{  // Check if the queue is empty
        printf("Queue is empty\n");
    } 
	else
	{
        printf("Queue elements are: ");
        for(i=front; i<=rare; i++)
		{  // Iterate from front to rare
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
//Exercise:
//Write a c program to implement queue operations using arrays.
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1,rare=-1,data,ch;
void insertion();
void deletion();
void display();
void insertion(){
    if(rare==MAX-1){
        printf("Stack Overflow\n");
    }else if(front==-1&&rare==-1)
        front++;
        rare++;
        printf("Enter the data\n");
        scanf("%d",&data);
        queue[rare]=data;
        printf("Data inserted successfully\n");
}
void deletion(){
    if(front==-1&&rare==-1){
        printf("Stack Underflow\n");
    }
    else if(front==rare){
        printf("Deleted Element: %d\n",queue[front]);
        front=rare=-1;
    }else{
        rare++;
        printf("Enter data to insert: %d\n",queue[rare]);
        printf("Date inserted successfully");
    }
}
int main()
{
    
    return 0;
}