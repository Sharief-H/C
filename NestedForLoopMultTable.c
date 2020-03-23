//multiplication table
#include<stdio.h>

int main()
{
	int i,j,c=1;

	for(i=1;i<=10;i++)
	{
	    printf("\t%d",i);}
        printf("\n\t  ------------------------------------------------------------------------\n");
        for(i=1;i<=10;i++)
        {
            printf("\t%d|",c);
            for(j=1;j<=10;j++)
            {
                printf("%d\t",c*j);
            }
            c++;
            printf("\n");
        }

	return(0);
}
