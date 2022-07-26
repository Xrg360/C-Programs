//Read a Natural Number and check whether the number is Armstrong or not
#include<stdio.h>
void main(){
    int a,f=0;
    printf("enter the number : ");
    scanf("%d",&a);
    int temp=a;
    int sum=0;
    int remainder;
    int cube ;
    while(temp>0){
        remainder=temp%10;
        cube=remainder*remainder*remainder;
        sum=sum+cube;
        temp=temp/10;
    }
  
    if(sum==a){
        printf("%d is an Armstrong number\n",a);
    }
    else{
        printf("%d is not an Armstrong number\n",a);
    }
}
