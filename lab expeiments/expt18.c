//Read a string (word), store it in an array and obtain its reverse by using a user defined function.
#include <stdio.h>
void reverse(char str[])
{
    int i, j;
    char temp;
    int len=0;
    // length of string
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("The length of the string is: %d\n", len);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("The reverse of the string is: %s", str);
}
void main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%s", str);
    reverse(str);
}

