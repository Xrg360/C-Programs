//11.Read two strings (each one ending with a $ symbol), store them in
// arrays and concatenate them without using library functions.
#include<stdio.h>
void main()
{
    int i,j,n=0,m=0;
    char str1[100],str2[100];
    printf("Enter the first string\n");
    scanf("%s",str1);
    printf("Enter the second string\n");
    scanf("%s",str2);
    while(str1[n]!='$')
    {
        n++;
    }
    while(str2[m]!='$')
    {
        m++;
    }    
    for(i=0;i<m;i++)
    {
        str1[i+n]=str2[i];
    }
    str1[n+m]='\0';
    printf("The concatenated string is %s\n",str1);
}
