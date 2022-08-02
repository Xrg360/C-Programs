#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp = num;
    int sum = 0;
    for(;temp>0;temp/=10){
       sum+=fact(temp%10);
    }
    if(sum==num){
        printf("%d is a strong number",num);
    }
    else{
        printf("%d is not a strong number",num);
    }
}
int fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}