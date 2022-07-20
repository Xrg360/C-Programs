//sort the numbers in a matrix by each row
#include<stdio.h>
void main(){
    int a[10][10],i,j,k,l,m,n,temp;
    printf("Enter the number of rows and columns :");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix :");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n-j-1;k++){
                if(a[i][k]>a[i][k+1]){
                    temp=a[i][k];
                    a[i][k]=a[i][k+1];
                    a[i][k+1]=temp;
                }
            }
        }
    }
    printf("The sorted matrix is :");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    rowsum(a,m,n);
    columnsum(a,m,n);
}
void rowsum(int a[10][10],int m,int n){
    int i,j,sum=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum=sum+a[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }
}
void columnsum(int a[10][10],int m,int n){
    int i,j,sum=0;
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            sum=sum+a[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }
}