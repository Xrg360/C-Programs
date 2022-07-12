#include<stdio.h>
int main(){
    int i,a[50],size,search_ele,flag=0;
    printf("how much - ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("enter number a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("which number do you want to search : ");
    scanf("%d",&search_ele);
    for(i=0;i<size;i++){
        if(a[i]==search_ele){
        printf("found");
            goto abc;
        }
    }
    printf("notfound");
abc:  return 0;
}