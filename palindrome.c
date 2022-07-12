#include<stdio.h>
void main(){
    int a,sum=0;
    printf("Enter a number to check : ");
    scanf("%d",&a);
    int t=a;
    for(;t>0;t/=10){
        sum =sum*10+(t%10);
    }
    if (sum == a)
    {
        printf("%d is a palindrome",a);
    }
    else{
        printf("%d is not a palindrome",a);
    }
    
}












