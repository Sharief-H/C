// Demonstrating a 2-Dim Array in C Language
// Program to read Elements in the form of a Matrix of order m x n
// and Find the sum of All the Elements
#include<stdio.h>
int main()
{
    int a[5][5],i,j,r,c,sum=0, *p;
    p = &sum;

    printf("\nENTER THE ROW AND COLUMN REQUIRED");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nENTER AN ELEMENT FOR %d,%d POSITION : ",i,j);
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    printf("\n\nTHE SUM OF ALL THE ELEMENTS OF THE ARRAY IS : %p",p);
    return(0);
}

