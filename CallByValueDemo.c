/** Program to swap numbers using call-by value

*/
#include<stdio.h>

int main()
{
    int a, b;
    a=20; b=30;
    printf("\nBefore:Number1 is %d and Number2 is %d..",a,b);
    swap(a,b);
    printf("\nAfter:Number1 is %d and Number2 is %d..",a,b);
    return(0);
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nNumber1 is %d and Number2 is %d..",a,b);

}
