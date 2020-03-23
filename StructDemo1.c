// Program to Demonstrate the Working of a Simple Structures in C Language

#include<stdio.h>
#include<string.h>

struct Employee
{
    int Id;
    char Name[25];
    int Age;
    long Salary;
};

int main()
{
    struct Employee E;

    printf("\nEnter Employee Id : ");
    scanf("%d",&E.Id);

    printf("\nEnter Employee Name : ");
    scanf("%s", E.Name);

    printf("\nEnter Employee Age : ");
    scanf("%d",&E.Age);

    printf("\nEnter Employee Salary : ");
    scanf("%ld",&E.Salary);

    // Displaying back the Entered Data
    printf("\nEntered Information.......\n");
    printf("\n\nEmployee Id : %d",E.Id);
    printf("\nEmployee Name : %s",E.Name);
    printf("\nEmployee Age : %d",E.Age);
    printf("\nEmployee Salary : %ld\n",E.Salary);

    return 0;
}
