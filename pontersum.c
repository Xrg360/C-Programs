//find the sum of two variables using pointers
#include<stdio.h>
void main(){
    int a,b,*p,*q;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    int sum = *p + *q;
    printf("The sum of a and b is %d\n",sum);
}