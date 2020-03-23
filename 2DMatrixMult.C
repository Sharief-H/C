/** Practice Program -
    Matrix Multiplication using 2-Dim Arrays
*/
#include<stdio.h>
#define row 4
#define col 4

int main()
{
    int a[row][col],b[row][col],c[row][col],r1,c1,r2,c2,i,j,k;

	printf("\nENTER ORDER OF MATRIX A : ");
	scanf("%d%d",&r1,&c1);
	printf("\nENTER ORDER OF MATRIX B : ");
	scanf("%d%d",&r2,&c2);

	if(c1==r2)
	{	printf("\nENTER ELEMENTS FOR MATRIX A : \n");
		for(i=0;i<r1;i++)
		{	for(j=0;j<c1;j++)
			{	printf("\nENTER ELEMENT FOR %d,%d POSITION : ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("\nENTER ELEMENTS FOR MATRIX B : \n");
		for(i=0;i<r2;i++)
		{	for(j=0;j<c2;j++)
			{	printf("\nENTER ELEMENT FOR %d,%d POSITION : ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		printf("\n\nTHE MATRIX A IS : \n");
		for(i=0;i<r1;i++)
		{	for(j=0;j<c1;j++)
			{	printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("\n\nTHE MATRIX B IS : \n");
		for(i=0;i<r2;i++)
		{	for(j=0;j<c2;j++)
			{	printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		printf("\n\nTHE MULTIPLIED MATRIX IS : \n");
		for(i=0;i<r1;i++)
		{	for(j=0;j<c2;j++)
			{       c[i][j]=0;
				for(k=0;k<r2;k++)
				{	c[i][j]=c[i][j]+(a[i][k]*b[k][j]);}
			}
		}
		for(i=0;i<r1;i++)
		{	for(j=0;j<c2;j++)
			{	printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{	printf("\nINCORRECT ORDER");
	}

	return(0);
}
