// Demonstrating Pointers and Arrays in C Language

#include<stdio.h>

int main()
{
    int a[3];
    int *p;

    p=&a[0];
    *p=10;

    printf("Address of a is....%p\n",a);
    printf("Address of p is....%p\n\n",p);
    printf("Value at a[0] is....%d\n",*p);
    printf("Value at a[0] is....%d\n",*(p+0));

    p++;
    *p=20;
    printf("Address of a is....%p\n",a);
    printf("Address of p is....%p\n\n",p);
    printf("Value at a[1] is....%d\n",*(a+1));
    printf("Value at a[1] is....%d\n",a[1]);

    p++;
    *p=30;
    printf("Address of a is....%p\n",a);
    printf("Address of p is....%p\n\n",p);
    printf("Value at a[2] is....%d\n",*(a+2));
    printf("Value at a[2] is....%d\n",a[2]);

    return 0;
}
