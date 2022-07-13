//Read two inputs each representing the distances between two points in the Euclidean space, store these in structure variables, and add the two distance values.
#include<stdio.h>
#include<math.h>
struct distance_calc{
    int x,y;
};
void main(){
    struct distance_calc d1,d2;
    printf("Enter the first x: ");
    scanf("%d",&d1.x);
    printf("Enter the first y: ");
    scanf("%d",&d1.y);
    printf("Enter the second x: ");
    scanf("%d",&d2.x);
    printf("Enter the second y: ");
    scanf("%d",&d2.y);
    printf("\nfirst :(%d,%d)\n",d2.x,d2.y);
    printf("\nsecond:(%d,%d)\n",d1.x,d1.y);
    float d = sqrt(pow(d1.x-d2.x,2)+pow(d2.y-d1.y,2));
    printf("The sum of the two distances is: %d",d);
};
