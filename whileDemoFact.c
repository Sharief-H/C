// demonstrate the working of while loop
// Program to find the Factorial of a Given Number

#include<stdio.h>

int main()
{
    int number,i,factorial;

    printf("Enter a Number to Find the Factorial: ");
    scanf("%d",&number);

    factorial=1;
    i=1;

    while(i<=number)
    {
        factorial *= i;
        i++;
    }
    printf("\nThe Factorial of %d is .... %d\n",number,factorial);
    return 0;
}
