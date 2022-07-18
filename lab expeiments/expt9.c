/*Read n integers, store them in an array and sort the elements in the array using Bubble Sort
algorithm*/
#include<stdio.h>
void main(){
    int size,i,j,temp;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted elements are\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}