#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for (int j = 0; j < i; j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
}