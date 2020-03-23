/** Program to Find the Fibonacci series of a given Number...
*/
int fib(int);
#include<stdio.h>
int main()
{
    int n,ch;
    do
    {
        printf("\nEnter the Term....");
        scanf("%d",&n);
        if(n>0)
            printf("The Fib of %dth term is ..%d",n, fib(n));
        else
            printf("Enter Correct Input...");
            printf("\nDo you wish to continue...?(if yes press 1)");
            scanf("%d",&ch);
    }
    while(ch==1);
    return(0);
}

int fib(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    else
        return (fib(n-1) + fib(n-2));

}
