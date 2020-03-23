/** Program to Reverse a Given Number
    for input 1234, output should be 4321
*/
#include<stdio.h>

int main()
{
    int n, rem, rev=0;
    printf("Enter a number");
    scanf("%d", &n);

    while(n>0)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    printf("\nThe Reversed Number is....%d", rev);
 	return(0);
}
