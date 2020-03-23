/** Programming Challenge -
    Find the Largest of 3 given numbers
    using Ternary operator i.e ?:
*/

#include<stdio.h>

int main()
{
    int a, b,c, result;

    printf("\nEnter any 2 numbers....");
    scanf("%d%d%d",&a,&b,&c);

    result = (a>b &&a>c) ? a :(b>c ? b : c);
    printf("\nThe Largest among %d ,%d and %d is...%d",a,b,c,result);
    return 0;
}
