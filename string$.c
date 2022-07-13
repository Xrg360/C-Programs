#include<stdio.h>
#include<string.h>
void main(){
    char str[100],str1[100];
    int i=0;
    char ch,ch1;
    while(ch!='$'){
        ch=getchar();
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf("%s\n",str);
 i=0;
     while(ch1!='$'){
        ch1=getchar();
        str1[i]=ch1;
        i++;
    }
    str1[i]='\0';
    int m = strlen(str);
    int n = strlen(str1);
    int j;
    for(i=0, j=m-1;i<n-2,j<m+n-1;i++,j++)
        str[j]=str1[i];
    printf("%s",str);
}