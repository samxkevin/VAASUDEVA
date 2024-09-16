#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,ci,amount;
	printf("enter the values of p,t,r: \n");
	scanf("%f%f%f",&p,&t,&r);
	amount=p*pow((1+r/100),t);
	ci=amount-p;
	printf("%f",ci);
}
