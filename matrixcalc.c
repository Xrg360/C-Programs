/*Write a menu driven program for performing matrix addition, multiplication and finding the transpose. Use functions to
(i) read a matrix,
(ii) find the sum of two matrices,
(iii) find the product of two matrices,
(iv) find the transpose of a matrix and
(v) display a matrix*/
#include<stdio.h>
int m[10][10],n[10][10];
void readMatrix(int m[][3],int r,int c){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the element at row %d and column %d: ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
}
void displayMatrix(int m[][3],int r,int c){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}
void sum(int m[][3],int n[][3],int r,int c){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            m[i][j]=m[i][j]+n[i][j];
        }
    }
}
void matrixMultiplication(int m[][3],int n[][3],int r,int c){
    int i,j,k,sum=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            for(k=0;k<c;k++){
                sum=sum+m[i][k]*n[k][j];
            }
            m[i][j]=sum;
            sum=0;
        }
    }
    printf
}
void Transpose(int m[][3],int r,int c){
    int i,j,temp;
    for(i=0;i<r;i++){
        for(j=i+1;j<c;j++){
            temp=m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=temp;
        }
    }
}
void main(){
    int r,c,i,j,ch;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter the number of columns : ");
    scanf("%d",&c);
    do{
        scanf("%d",&ch);
        swtch(ch){

        case 1: readMatrix(m,r,c);
                readMatrix(n,r,c);
                break;
        case 2 :displayMatrix(m,r,c);
                displayMatrix(n,r,c);
                break;
        case 3: sum(m,n,r,c);
                break;

          case 4:
            matrixMultiplication(m,n,r,c);
            break;
        
            Transpose(m,r,c);
            displayMatrix(m,r,c);
        }
    }while(ch!=0);
}