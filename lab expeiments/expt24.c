//Open a text input file and count number of characters, words and lines in it; and store the results
// in an output file.
#include<stdio.h>
void main()
{
    FILE *fp;
    int ch, cnt, cnt1, cnt2;
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("File not found\n");
    }
    else
    {
        cnt=0;
        cnt1=0;
        cnt2=0;
        while((ch=fgetc(fp))!=EOF)
        {
            cnt++;
            if(ch==' ')
            {
                cnt1++;
            }
            if(ch=='\n')
            {
                cnt2++;
            }
        }
        fclose(fp);
        fp=fopen("output.txt","w");
        if(fp==NULL)
        {
            printf("File not found\n");
        }
        else
        {
            fprintf(fp,"Number of characters: %d\n",cnt);
            fprintf(fp,"Number of words: %d\n",cnt1);
            fprintf(fp,"Number of lines: %d\n",cnt2);
            fclose(fp);
        }
    }
}