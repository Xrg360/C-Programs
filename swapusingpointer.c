//swap two numbers using the pointers
#include<stdio.h>
void main(){
    int a,b,*p,*q;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("The value of a and b after swapping is %d %d\n",a,b);
}

void swap(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}