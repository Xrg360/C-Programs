//Declare a union containing 5 string variables (Name, House Name, City Name, State, and Pin code) each with a length of C_SIZE (user-defined constant). Then, read and display the address of a person using a variable of the union.
#include<stdio.h>
#define C_SIZE 20
union union1{
    char name[C_SIZE];
    char house[C_SIZE];
    char city[C_SIZE];
    char state[C_SIZE];
    char pin[C_SIZE];
};

void main(){
    union union1 u;
    printf("Enter the name: ");
    scanf("%s",u.name);
    printf("\nName: %s\t",u.name);
    printf("Enter the house name: ");
    scanf("%s",u.house);
    printf("House Name: %s\n",u.house);
    printf("Enter the city name: ");
    scanf("%s",u.city);
    printf("City Name: %s\n",u.city);
    printf("Enter the state name: ");
    scanf("%s",u.state);
    printf("State Name: %s\n",u.state);
    printf("Enter the pin code: ");
    scanf("%s",u.pin);
    printf("Pin Code: %s\n",u.pin);
}
    