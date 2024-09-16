/*#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	{
	    printf("a is max");  
	}
	else if (b>a && b>c)
	{
	    printf("b is max");  
	}
	else
	{
	    printf("c is max");  
	}
}*/
#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	while(a>b && a>c || b>a && b>c){
		if (a>b && a>c)
	{
	    printf("a is max");  
	}
	else if (b>a && b>c)
	{
	    printf("b is max");  
	}
	else
	{
	    printf("c is max");  
	}
	continue;
}
	while(a<b && a<c || b<a && b<c){
	if (a<b && a<c)
	{
	    printf("a is min");  
	}
	else if (b<a && b<c)
	{
	    printf("b is min");  
	}
	else
	{
	    printf("c is min");  
	}
	break;
}
}
