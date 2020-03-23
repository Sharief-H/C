#include<stdio.h>

int main()
{
    int n,i,j,c;

    printf("\nENTER THE LIMIT FOR PRINTING PRIME NUMBERS : ");
    scanf("%d",&n);
    for(j=2;j<=n;j++)
    {
        c=0;
        for(i=1;i<=j;i++)
        {
            if((j%i)==0)
            {
                c++;
            }
		 }
 	if(c==2)
 	    printf("%d  ",j);
}
printf("\n\n\n");
 return(0);
}
