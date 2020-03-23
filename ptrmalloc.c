/** Practice Program to show the working of
    Dynamic memory Allocation function - malloc()
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n, i;

    n=10;

    ptr = (int *)malloc(n * sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory NOt Allocated....");
        exit(0);
    }
    else
    {
        printf("Memory Allocated Successfully using malloc...");
        for(i=0;i<n;i++)
            ptr[i] = i+1;
        printf("\nThe Elements of the Array are....");
        for(i=0;i<n;i++)
            printf("%d",ptr[i]);
        printf("\nThe size of Pointer is....%d",sizeof(ptr));
        printf("\nThe size of integer is....%d",sizeof(int));
    }
    return 0;
}
