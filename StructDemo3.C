/** Programming Challenge to Storing and display
    the Hardware Item Details as shown in a table
*/
#include<stdio.h>
struct price
{

    int pr[3];
}p;
struct item
{
    char name[20], cat[20];
    struct price p;
};
int main()
{
    struct item it[3];
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("\nEnter Name for Item#%d..",i+1);
        scanf("%s",it[i].name);
        for(j=0;j<3;j++)
        {
            printf("\nEnter price for Month %d...",j+1);
            scanf("%d",&it[i].p.pr[j]);
        }
        printf("\nEnter the Category.....");
        scanf("%s",it[i].cat);
    }
    printf("\nHardware Item Details \n");
    printf("\nName\t\tPrice\t\tCategory");
    printf("\n\tM1\tM2\tM3\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t%d\t%d\t%d\t%s\n",it[i].name,it[i].p.pr[0],it[i].p.pr[1],it[i].p.pr[2],it[i].cat);
    }
	return(0);
}
