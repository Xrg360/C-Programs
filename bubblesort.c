#include<stdio.h>
void bubbleSort(){
    int a[10],i,j,temp;
    printf("Enter the elements of array\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<10;i++){
        for(j=0;j<10-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is\n");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
}