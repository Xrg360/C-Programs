//find the largest of three numbers using pointers
#include<stdio.h>
void main(){
    int a,b,c,*p,*q,*r;
    printf("Enter the value of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    p=&a;
    q=&b;
    r=&c;
    if(*p>*q && *p>*r){
        printf("The largest number is %d\n",*p);
    }
    else if(*q>*p && *q>*r){
        printf("The largest number is %d\n",*q);
    }
    else{
        printf("The largest number is %d\n",*r);
    }
}