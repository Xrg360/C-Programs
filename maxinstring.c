#include<stdio.h>
void main(){
    char str[100];
    printf("Enter the string :");
    gets(str);
    int len=0,count=0,i,j,largest = 0,mynum;
    char c,mychar;
    for ( i = 0; str[i] = '\0'; i++)
    {
        len++;
    }
    
    for ( i = 0; i < len-1; i++)
    {
        c=str[i];
        for ( j = 0; j < len-1; j++)
        {
            if(c==str[j])
                count++;
        }
        if(count>largest){
            mychar = str[i];
            mynum = count;
        }
        
    }
    printf("%d is the character occuring %d times",mychar,mynum);
        
}