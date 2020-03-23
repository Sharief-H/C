/** Program to Find the GCD of two given Numbers
    Using iteration and Recursion
*/

#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter 2 numbers to find GCD...");
    scanf("%d %d",&n1,&n2);

    printf("\nGCD of %d and %d using Iteration is....%d",n1,n2,gcdi(n1,n2));
    printf("\nGCD of %d and %d using Recursion is....%d",n1,n2,gcdr(n1,n2));
    return(0);
}

int gcdr(int m,int n)
{
    if(m==n)
        return n;
    else if(m > n)
        return gcdr(m-n, n);
    else
        return gcdr(m, n-m);
}

int gcdi(int m,int n)
{
    while(m !=n)
    {
        if(m>n)
            m = m - n;
        else
            n = n - m;
    }
    return n;
}
