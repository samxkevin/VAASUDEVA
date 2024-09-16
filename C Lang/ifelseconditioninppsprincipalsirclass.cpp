#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the values of x and y\n");
	scanf("%d%d",&x,&y);
	if(x>y){
	printf("x is greater than y");
	}
	else{
		printf("y is greater than x");
	}
	return 0;
}
