/* write a c program to
    -Create a structure containg name price quantity and total amount of a product.
    -use separate function to read and print the data*/
#include<stdio.h>
struct product
{
    char name[20];
    float price;
    int quantity;
    float total;
}p[10];
void total(int n){
    int i;
    for(i=0;i<n;i++){
        p[i].total=p[i].price*p[i].quantity;
    }
}
void read(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the name of the product: ");
        scanf("%s",p[i].name);
        printf("Enter the price of the product: ");
        scanf("%f",&p[i].price);
        printf("Enter the quantity of the product: ");
        scanf("%d",&p[i].quantity);
        
    }
}
void display(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nName of the product: %s",p[i].name);
        printf("\nPrice of the product: %f",p[i].price);
        printf("\nQuantity of the product: %d",p[i].quantity);
        printf("\nTotal amount of the product: %f",p[i].total);
    }
}
void main()
{
    int n;
    printf("Enter the number of products: ");
    scanf("%d",&n);
    read(n);
    total(n);
    display(n);
}
