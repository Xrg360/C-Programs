#include<stdio.h>
void main(){
    int a=0,b=1,sum=0,limit;
    printf("enter the limit : ");
    scanf("%d",&limit);
    for(int i=0;i<limit;i++){
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    
}