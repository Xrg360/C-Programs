/*Familiarization of console I/O and operators in C
i) Display “Hello World”
ii) Read two numbers, add them and display theirsum
iii) Read the radius of a circle, calculate its area and display it
iv)Evaluate the arithmetic expression ((a -b / c * d + e) * (f +g)) and display its solution.Read
the values of the variables from the user through console.*/
#include<stdio.h>
int main()
{
    printf("Hello World\n");
    int a,b,c,d,e,f,g;
    int n1,n2;
    printf("enter n1 and n2\n");
    scanf("%d%d",&n1,&n2);
    printf("sum of %d and %d is %d\n",n1,n2,n1+n2);
    printf("Enter the values of a,b,c,d,e,f,g\n");
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    printf("The solution of the expression is %d\n",((a-b)/c*d+e)*(f+g));
    return 0;
}
