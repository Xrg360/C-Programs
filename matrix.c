#include<stdio.h>
void main(){
    int a[10][10],b[10][10],r,c;
    printf("enter rows - ");
    scanf("%d",&r);
    printf("enter col - ");
    scanf("%d",&c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
        printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    
        printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }   
        printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
        
    }   
        printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("%d\t",((a[i][j]*b[j][i])+(a[i][j+1]*b[j+1][i])));
        }
        printf("\n");
        
    }   
    

}