// Program to Demonstrate the Arrays of Structures in C

#include<stdio.h>
struct student
{
    int marks[3],total;
	char name[10];
};

int main()
{
    struct student s[50];
	int i;

	for(i=0;i<3;i++)
	{	printf("\nENTER NAME OF STUDENT : ");
		scanf("%s",s[i].name);
		printf("ENTER MARKS OF THREE SUBJECTS : ");
		scanf("%d%d%d",&s[i].marks[0],&s[i].marks[1],&s[i].marks[2]);
		s[i].total=s[i].marks[0]+s[i].marks[1]+s[i].marks[2];
	}

	printf("\n\nSTUDENT DETAILS");
	printf("\n\n********************\n");
	printf("\nNAME\t\tMARKS\t\tTOTAL");
	printf("\n\n*****\t\t*****\t\t*****\n");
	printf("\n\tm1\tm2\tm3");
	printf("\n\t*****\t*****\t*****\n");
	for(i=0;i<3;i++)
	{	printf("%s\t%d\t%d\t%d\t%d\n",s[i].name,s[i].marks[0],s[i].marks[1],s[i].marks[2],s[i].total);
	}

	return(0);
}
