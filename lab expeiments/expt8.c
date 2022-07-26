/*Read n integers, store them in an array and search for an element in the
array using an algorithm for Linear Search*/
#include<stdio.h>
int main(){
    int size,i,key,flag=0;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key to be searched\n");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d is present in the array\n",key);
    else
        printf("%d is not present in the array\n",key);

    return 0;

}
