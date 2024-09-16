#include<stdio.h>
int main()
{
	char v,i,b,g,y,o,r;
	printf("Enter your character\n");
	scanf("%s%s%s%s%s%s%s",&v,&i,&b,&g,&y,&o,&r);
	if(v="v"){
	printf("Your character corresponds to Violet");
	}
	else if(i="i"){
	printf("Your character corresponds to Indigo");
	}
	else if(b="b"){
	printf("Your character corresponds to Blue");
	}
	else if(g="g"){
	printf("Your character corresponds to green");
	}
	else if(y="y"){
	printf("Your character corresponds to Yellow");
	}
	else if(o="o"){
	printf("Your character corresponds to Orange");
	}
	else if(r="r"){
	printf("Your character corresponds to Red");
	}
	else{
	printf("Enter a desired character");
	}
	return 0;
}

