#include<stdio.h>
int main()
{
int x,y,res;
printf("enter the values of x,y: ");
scanf("%d",&x);
scanf("%d",&y);
res=(x*x*x+y*y*y-x*x-y*y/x*y);
printf("res=%d\n",res);
}
