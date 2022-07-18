//Read n integers, store them in an array and find their sum and average
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    
    printf("The sum of the elements is %d\n",sum);
    printf("The average of the elements is %f\n",(float)sum/n);
    return 0;
}