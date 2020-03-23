#include <stdio.h>
int main()
{
	int a, b, rows;
	printf("Enter number of rows");
	scanf("%d",&rows);

	for(a=1; a<=rows; a++)
	{
		for(b=a; b>=1; b--)
		{
			printf("%d ",b );
		}
		printf("\n");
	}
	return 0;
}
