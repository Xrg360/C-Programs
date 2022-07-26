//Read a string (word), store it in an array and check whether it is a palindrome word or not.
#include<stdio.h>
void main()
{
    int i,j,n=0,flag=0;
    char str[100];
    printf("Enter the string\n");
    scanf("%s",str);
    while(str[n]!='\0')
    {
        n++;
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%s is not a palindrome word\n",str);
    else
        printf("%s is a palindrome word\n",str);
}
