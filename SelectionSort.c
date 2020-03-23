/** Program to sort the Elements in Ascending order using
    Selection Sort Technique
*/

#include<stdio.h>
int main()
{
    int a[10], n, i;

    printf("\nEnter the number of Elements...");
    scanf("%d",&n);

    printf("\nEnter the Elements.....");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    selection(a,n);
    return 0;
}

void selection(int a[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n;i++)
    {
        j=i;
        for(k=i+1;k<n;k++)
        {
            if(a[k]>a[j])
                j=k;
        }
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("\nThe Sorted Elements are.....\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return;
}
