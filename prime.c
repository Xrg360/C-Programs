#include<stdio.h>
void main(){
    int n1,n2,f=0;
    printf("enter the first number : ");
    scanf("%d",&n1);
    printf("enter the second number: ");
    scanf("%d",&n2);
    for(int a=n1;a<=n2;a++){
        f=0;
        for(int i=2;i<a/2;i++){
            if(a%i==0){
                f=1;
            }
        }
        if(f==0)
        printf("%d, ",a);

    }
}