#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],i,c;
    for(i=0;i<10;i++)
    {
     	printf("\nENTER AN ELEMENT FOR %d POSITION : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=9,c=1;i>=0,c<=10;i--,c++)
        printf("\n\nNOW AT POSITION %d THE ELEMENT IS %d",c,a[i]);

 return(0);
}
