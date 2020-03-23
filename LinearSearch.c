/** Program to search a Key Element in an Array
    using Linear Search Technique
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10], i, n, key, flag=0;
    printf("Enter number of elements in Array....");
    scanf("%d", &n);

    printf("Enter the elements....");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter a Key element..");
    scanf("%d", &key);

    for(i=0;i<n;i++)
    {
        if(key == a[i])
        {
            flag= 1;
            break;
        }
    }
    if(flag == 1)
        printf("Element Found at %d position", i+1);
    else
        printf("\nElement NOT Found");
    return 0;
}
