/*#include<stdio.h>
int main(){
	int a,b,c;
	while(b==1)
	{
		printf("enter the number");
			scanf("%d",&a);
		    c=c+a;
		    printf("Do you want to continue: yes=>1 no=>0 %d",&b);
		    scanf("%d",&b);
	}
	printf("%d",&c);
	return 0;
}*/
#include<stdio.h>
int main(){
	int a,b;
    scanf("%d",&a);
    b=a;
		while(a>b && a != 0)
		{
		printf("%d  ",a);
		b--;
	    }
	return 0;
}
