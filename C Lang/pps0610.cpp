/*#include<stdio.h>
int main()
{
	int a=0,sum=0;
	L1:
	sum=sum+a;
	a++;
	if(a<=100) goto L1;
	printf("sum = %d",sum);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int c=0; //initializtion
	while(c<=100)//condition
	{
		printf("%d\n",c);
		c++;
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	printf("mutiples of 11\n");
	int c=11,n=1,p=11;
	while(p<=300){
		printf("%d\n",p);
		n=n+1;
		p = c*n;
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int c=11,n=1,p;
	printf("multiples of 11");
	while(n<=20){
	p = c * n;
	printf("%d * %d = %d\n",c,n,p);
	n++	;
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int c=0; //initializtion
	while(c<=100)//condition
	{
		printf("%d\n",c);
		c++;
	}
	return 0;
}*/
#include<stdio.h>
int main()
{
	int n,p;
	p=1;
	scanf("%d",&n);

	do
	{
		p=p*n;
		n--;
	}while(n>0);
		printf("%d",p);
	return 0;
}
/*#include<stdio.h>
int main()
{
	int fact,n;
	fact=1;
	scanf("%d",&n);
	if(n>0)
	{
		do
		{
			fact = fact*n;
			n--;
		}while(n>0);
		printf("%d",fact);
	}
	return 0;
}*/
/**/
