//Read a string (word), store it in an array, and obtain its reverse by using a user-defined function.
#include<stdio.h>
#define SIZE 20
void reverse(char *);
void main(){
    char str[SIZE];
    printf("Enter the string: ");
    scanf("%s",str);
    reverse(str);
    printf("The reverse of the string is: %s",str);
}
void reverse(char *str){
    int i,j;
    char temp;
    for(i=0,j=strlen(str)-1;i<j;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}