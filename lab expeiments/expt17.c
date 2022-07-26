//Find the factorial of a given Natural Number n usingrecursive and non recursive functions
 #include<stdio.h>
 int fact(int);
int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int fact_nonrec(int n){
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factorial of %d with recursion is: %d \n",n,fact(n));
    printf("The factorial of %d without recursion factorial  = %d\n",fact_nonrec(n));
}
