#include<stdio.h>
int main()
{
	float p,t,r,a;
	printf("Enter the values of principle amount, time period, interest respectively: ");
	scanf("%f%f%f",&p,&t,&r);
	a=(p*t*r)/100;
	printf("%f",a);
}
