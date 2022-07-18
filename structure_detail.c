//declare a structure with field rollno ,name,array to store marks of 5 subjects
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks[5];
};
void main(){
    struct student s[5];
    int i;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the rollno");
        scanf("%d",&s[i].rollno);
        printf("enter the name");
        scanf("%s",s[i].name);
        printf("enter the marks");
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("rollno=%d\n",s[i].rollno);
        printf("name=%s\n",s[i].name);
        for (int j = 0; j < 5; j++)
        {
            printf("marks=%d\n",s[i].marks[j]);
        }
    }
    int sum[5]  ;
    int total_sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum[i] = sum[i]+s[i].marks[i];
    }
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    
  
}