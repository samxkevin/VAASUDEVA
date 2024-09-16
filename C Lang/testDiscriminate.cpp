#include<stdio.h>
int main()
{
int a,b,c,res;
printf("enter the value of a,b,c");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
res=(b*b-4*a*c)+(4*a*c-b*b);
printf("result=%d\n",res);
}
