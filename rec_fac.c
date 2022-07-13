// Find the factorial of a given Natural Number n using recursive and non-recursive functions.
 #include<stdio.h>
    int fact(int n){
        if(n==0)
            return 1;
        else
            return n*fact(n-1);
    }
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factorial of %d is: %d",n,fact(n));
}