#include<stdio.h>
int main()
{
int a,b;
float c,d;
char e,f;
printf("enter values of a,b,c,d,e,f");

scanf("%d%d%f%f",&a,&b,&c,&d);
scanf("%s,%s",&e,&f);

printf("a=%d\nb=%d\nc=%f\nd=%f\n",a,b,c,d);
printf("%c",e);
printf("%c",f);
}
