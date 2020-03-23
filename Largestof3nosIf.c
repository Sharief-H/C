/** Programming Challenge -
    Find the Largest among 3 numbers
    using if-else condition
*/

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("\nEnter 3 numbers...");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
        printf("%d is the Largest among %d, %d and %d",a,a,b,c);
    else if(b>c)
        printf("%d is the Largest among %d, %d and %d",b,a,b,c);
    else
        printf("%d is the Largest among %d, %d and %d",c,a,b,c);
    return 0;
}
