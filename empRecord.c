//Using structure, read and print data of n employees (Name, Employee Id and Salary).
#include<stdio.h>
struct empRecord{
    char name[100];
    int id;
    float salary;
};
void main(){
    struct empRecord e[100];
    int n,i;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the name: ");
        scanf("%s",e[i].name);
        printf("Enter the id: ");
        scanf("%d",&e[i].id);
        printf("Enter the salary: ");
        scanf("%f",&e[i].salary);
    }
    for(i=0;i<n;i++){
        printf("\nName: %s\n",e[i].name);
        printf("Id: %d\n",e[i].id);
        printf("Salary: %f\n",e[i].salary);
    }
}