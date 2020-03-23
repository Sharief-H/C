/** Practice Program to show how
    ASCII values are accessed in C Language
*/
#include<stdio.h>
int main()
{
	char i;

 //printing lowercase
	 for(i='a';i<='z';i++)
 	{
		printf("\t\t\tTHE ASCII EQUIVALENT OF %c IS %d\n",i,i);
	}
 //printing uppercase
 	for(i='A';i<='Z';i++)
	 {	printf("\t\t\tTHE ASCII EQUIVALENT OF %c IS %d\n",i,i);
}
	 return 0;
 }
