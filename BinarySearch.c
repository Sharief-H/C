/** Programming Challenge -
    Search a Key Element in an Array using Binary Search
*/

#include<stdio.h>
int main()
{
    int low,high,mid,flag=0,n,i,key;
    int a[10];
    printf("Enter the Number of Elements....");
    scanf("%d",&n);
    printf("\nEnter the Elements in Ascending order.....");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the Key Element to be Searched.....");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid = (low+high)/2;
        if(key==a[mid])
        {
            printf("\nElement %d Found at %d Position..",key,mid+1);
            flag = 1;
            break;
        }
        else if(key<a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if(flag==0)
        printf("\nElement %d Not Found.....",key);
    return 0;
}
