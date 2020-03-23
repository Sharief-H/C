#include<stdio.h>
int main()
{
    int n, temp, rem, rev=0;
	printf("\nENTER A NUMBER FOR CHECKING WHETHER IT IS A PALINDROME NO. OR NOT : ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	    rem=n%10;
		n=n/10;
		rev=(rev*10)+rem;
	}
	if(temp==rev)
	{	printf("\n\tIT IS A PALINDROME NUMBER");}
	else
	{	printf("\n\tIT IS NOT A PALINDROME NUMBER");}


	return(0);
}
