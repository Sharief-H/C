// Demonstrating a 1-Dim Array in C Language
// Program to implement Bubble sort
#include<stdio.h>
int main()
{
    int a[10],i,j,n,temp;
	printf("\nENTER NUMBER OF ELEMENTS TO BE SORTED : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    printf("\nENTER ELEMENT FOR %d POSITION : ",i+1);
		scanf("%d",&a[i]);
    }
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				if(a[j]>a[j+1])
				{
				    temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
    }
	printf("\nTHE SORTED NUMBERS ARE : \n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
    printf("\n");
	return(0);
}

