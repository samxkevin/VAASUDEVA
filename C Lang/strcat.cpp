#include<stdio.h>
#include<string.h>
int main()
{
 char a[100],c[100];
 printf("Enter a string: ");
 scanf("%s",&a);
 scanf("%s",&c);
 char b=strlen(a);
 printf("concatenated string is %s",strcat(a,c));
}
