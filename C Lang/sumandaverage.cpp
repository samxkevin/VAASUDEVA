#include<stdio.h>
int main(){
    int n1,n2,n3,sum,average;
    scanf("%d %d %d", &n1, &n2, &n3);
    sum= n1+n2+n3;
    average=sum/3;
    printf("the sum and average is %d and %d", average, sum);
}

