//Compute sum of the elements stored in an array using pointers and user defined function.
#include<stdio.h>
void main()
{
    int arr[100];
    int n, i;
    int * ptr = arr;    // Pointer to arr[0]
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
        // (ptr + i) is equivalent to &arr[i]
        scanf("%d", (ptr + i)); 
    }

    printf("Array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    
    printf("Sum of elements in array: %d\n", sum(ptr, n));
}
int sum(int *ptr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }
    return sum;
}
