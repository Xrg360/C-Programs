// Read 3 integer values and find the largest amoung them.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the largest\n",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the largest\n",b);
    }
    else
    {
        printf("%d is the largest\n",c);
    }
    return 0;
}