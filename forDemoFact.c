// demonstrate the working of for loop
// Program to find the Factorial of a Given Number

#include<stdio.h>

int main()
{
    int number,i,factorial;

    printf("Demonstrating the Working of \"for Loop \".. \n");
    printf("Enter a Number to Find the Factorial: ");
    scanf("%d",&number);

    for(i=1,factorial=1;i<=number;i++)
    {
        factorial *= i;
    }
    printf("\nThe Factorial of %d is : %d\n",number,factorial);
    return 0;
}
