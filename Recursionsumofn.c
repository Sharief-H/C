//  Demonstrating Recursive Functions or Recursion in C Language
//  Program to find sum of n natural numbers

#include <stdio.h>

int sum(int n);   // function prototype

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", sum(num));  // function call
    return 0;
}
int sum(int n)  // function definition
{
    if (n != 0)
        return n + sum(n - 1);  // calling function recursively
    else
        return n;
}
