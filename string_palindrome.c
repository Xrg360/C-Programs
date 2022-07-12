//this is to check if a string is a palindrome or not
#include <stdio.h>
#include <string.h>
void main(){

    char str[100];
    gets(str);
    int f=0;
    int j=strlen(str)-1;
  for(int i=0;i<strlen(str)/2;i++,j--){
    if(str[i]!=str[j]){
      f=1;
      break;
    }
  }
      (f==1)?printf("%s is not a palindrome",str):printf("%s is a palindrome",str);
}