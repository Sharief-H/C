#include<stdio.h>
#include<string.h>

struct vehicle
{	int type;
	char fuel[10],model[10];
};

int main()
{
        struct vehicle v;

		printf("\nENTER TYPE : ");
		scanf("%d",&v.type);
		printf("\nENTER FUEL KIND : ");
		fflush(stdin);
		gets(v.fuel);
		printf("\nENTER MODEL NAME : ");
		gets(v.model);

        printf("\n\nVEHICLE DETAILS\n");
        printf("\nTYPE\tFUEL\tMODEL NO.\n");
		printf("%d\t%s\t%s\n",v.type,v.fuel,v.model);

        return(0);
}
