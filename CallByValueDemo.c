/** Program to swap numbers using call-by value

*/
#include<stdio.h>

int main()
{	int n1,n2;

 	printf("\nENTER TWO ELEMENTS FOR SWAPPING \" CALL BY VALUE MECHANISM \": ");
	scanf("%d%d",&n1,&n2);
 	printf("\nBEFORE SWAPPING\nNUMBER 1 : %d\nNUMBER 1 : %d",n1,n2);
 	swap(n1,n2);
	printf("\n\nIN MAIN AFTER SWAPPING\nNUMBER 1 : %d\nNUMBER 2 : %d",n1,n2);

	return(0);
}

int swap(int x,int y)
{	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("\n\nIN SWAP\nNUMBER 1 : %d\nNUMBER 2 : %d",x,y);
	return;
}
