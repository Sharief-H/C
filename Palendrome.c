/** Program to Find whether Number is a PALENDROME or NOT
    Eg: 121 is a PALENDROME
    and 123 is NOT
*/
#include<stdio.h>
int main()
{
    int n, rev=0, temp, rem;
    printf("Enter a Number...");
    scanf("%d", &n);

    temp = n;
    while(n>0)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 +rem;
    }
    if( temp == rev)
        printf("The Number %d ..is a PALENDROME",temp);
    else
        printf("The Number %d ..is NOT a PALENDROME", temp);
	return(0);
}
