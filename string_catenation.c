// program for concatinating two strings without library functions
#include<stdio.h>
void main()
{
    char str1[10];
    char str2[10];
    char str3[20];
    int i,j;
    printf("Enter the first string");
    scanf("%s",str1);
    printf("Enter the second string");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
    }
    for(j=0;str2[j]!='\0';j++)
    {
        str3[i+j]=str2[j];
    }
    str3[i+j]='\0';
    printf("%s",str3);
}