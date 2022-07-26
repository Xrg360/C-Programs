//Read a string (ending with a $ symbol), store it in an array, and count the number of vowels, consonants, and spaces in it
#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    int i,vowels=0,consonants=0,spaces=0;
    printf("Enter the string: ");
    scanf("%s",str);
    for(i=0;str[i]!='$';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            vowels++;
        else if(str[i]==' ')
            spaces++;
        else
            consonants++;
    }
    printf("The number of vowels is: %d\n",vowels);
    printf("The number of consonants is: %d\n",consonants);
    printf("The number of spaces is: %d\n",spaces);
}
