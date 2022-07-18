#include<stdio.h>
int i,j,k,r1,c1,r2,c2;
int a[50][50],b[50][50];
void read1();
void read2();
void display();
void add();
void product();
void transpose();
int main()
{
	int n;
	printf("Select the Required MATRIX operation\n1. addition\n2. multiplication\n3. transpose\n4. exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:add();
				break;
		case 2:product();
				break;
		case 3:transpose();
				break;
		case 4:printf("Ok BYE");
				break;
		default :printf("invalid choice");
	}
}
void read1(int r,int c)
{
for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
}
void read2(int r,int c)
{
for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		scanf("%d",&b[i][j]);
}
void display(int R[][50],int p,int q)
{
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		printf("%d ",R[i][j]);
		printf("\n");
	}
}
void add()
{
	printf("Enter rows and coloum of 1st matrix: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter 1st matrix: ");
	read1(r1,c1);
	display(a,r1,c1);
	printf("Enter rows and coloum of 2nd matrix: ");
	scanf("%d%d",&r2,&c2);
	printf("Enter 2nd matrix: ");
	read2(r2,c2);
	display(b,r2,c2);
	if(r1==r2&&c1==c2)
	{
	int s[50][50];
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		s[i][j]=a[i][j]+b[i][j];
	printf("The sum of given 2 matrices is :\n");
	display(s,r1,c1);
	}
	else
	printf("Addition operation cannot be performed");
	
}
void product()
{
	printf("Enter rows and coloum of 1st matrix: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter 1st matrix: ");
	read1(r1,c1);
	display(a,r1,c1);
	printf("Enter rows and coloum of 2nd matrix: ");
	scanf("%d%d",&r2,&c2);
	printf("Enter 2nd matrix: ");
	read2(r2,c2);
	display(b,r2,c2);
	if(c1==r2)
	{
		int s[50][50];
		for(i=0;i<r1;i++)
			for(k=0;k<c2;k++)
			{
				s[i][k]=0;
				for(j=0;j<c1;j++)
				s[i][k]=s[i][k]+a[i][j]*b[j][k];
			}
		printf("The product of given 2 matrices is :\n");
		display(s,r1,c2);
	}
	else
	printf("Multiplication operation cannot be performed");
}
void transpose()
{
	printf("Enter rows and coloum the matrix: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter the matrix: ");
	read1(r1,c1);
	display(a,r1,c1);
	int s[50][50];
	for(i=0;i<c1;i++)
		for(j=0;j<r1;j++)
		s[i][j]=a[j][i];
	printf("The transpose of given matrix is :\n");
		display(s,c1,r1);
	
}