/** Practice Program to show the working of
    Nested Structures in C
*/

#include<stdio.h>
struct address
{
    char hno[10],city[10];
	long pin;
	int street;
}A;
struct emp
{
    char name[20],dept[20];
	int empid;
	float sal;
	struct address A;
}e;
int main()
{
	printf("\n ENTER ID : ");
	scanf("%d",&e.empid);
	printf(" ENTER NAME : ");
	scanf("%s",e.name);
	printf(" ENTER DEPARTMENT : ");
	scanf("%s",e.dept);
	printf(" ENTER SALARY : ");
	scanf("%f",&e.sal);
	printf(" ENTER HOUSE NUMBER : ");
	scanf("%s",e.A.hno);
	printf(" ENTER STREET NUMBER : ");
	scanf("%d",&e.A.street);
	printf(" ENTER CITY NAME : ");
	scanf("%s",e.A.city);
	printf(" ENTER PIN CODE : ");
	scanf("%ld",&e.A.pin);
	printf("\n  ID : ");
	printf("%d",e.empid);
	printf("\n  NAME : ");
	printf("%s",e.name);
	printf("\n  DEPARTMENT : ");
	printf("%s",e.dept);
	printf("\n  SALARY : ");
	printf("%f",e.sal);
	printf("\n  HOUSE NUMBER : ");
	printf("%s",e.A.hno);
	printf("\n  STREET NUMBER : ");
	printf("%d",e.A.street);
	printf("\n  CITY NAME : ");
	printf("%s",e.A.city);
	printf("\n  PIN CODE : ");
	printf("%ld",e.A.pin);
	return(0);
}



