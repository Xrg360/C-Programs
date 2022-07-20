/*Do the following using pointers
i) add two numbers
ii) swap two numbers using a user defined function*/
#include<stdio.h>
void add(int *,int *);
void swap(int *,int *);
void main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    add(&a,&b);
    swap(&a,&b);
}
void add(int *p,int *q)
{
    int sum=*p+*q;
    printf("The sum of the two numbers is: %d\n",sum);
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("The swapped numbers are: %d %d\n",*p,*q);
}
