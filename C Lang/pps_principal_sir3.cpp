#include<stdio.h>
int main()
{
	int x,y,z,p,q,k,m,E;
	scanf("%d%d%d%d%d%d%d\n",&x,&y,&z,&p,&q,&k,&m);
	E=(1+x*x+y*z+p)/((q/k)*m);
	printf("%d",E);
	return 0;
}
