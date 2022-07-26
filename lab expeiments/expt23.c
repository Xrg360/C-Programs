/*Create a file and perform the following
i) Write data to the file
ii) Read the data in a given file & display the file content on console
iii) append new data and display on console*/
#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("test.txt","w");
    if(fp==NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("Enter the data to be written to the file: ");
        while((ch=getchar())!='\n')
        {
            fputc(ch,fp);
        }
        fclose(fp);
    }
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("The data in the file is: ");
        while((ch=fgetc(fp))!=EOF)
        {
            printf("%c",ch);
        }
        fclose(fp);
    }
    fp=fopen("test.txt","a");
    if(fp==NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("\nEnter the data to be appended to the file: ");
        while((ch=getchar())!='\n')
        {
            fputc(ch,fp);
        }
        fclose(fp);
    }
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("The data in the file is: ");
        while((ch=fgetc(fp))!=EOF)
        {
            printf("%c",ch);
        }
        fclose(fp);
    }
}
