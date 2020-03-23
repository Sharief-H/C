// Demonstrating Keywords and Identifiers in C

#include<stdio.h>

int main()
{

    int quantity;
  //  int main;       // main is keyword
  //  main = 100;

    int _myCodeno2;
 //   int 1Empno;     // Identifiers should not start with a digit
    int Empnumber$;
    int total_sale;
    long int myfavouratebankaccountnumber;

//    int break;     // break is a keyword, cannot be used as identifier
 //   break =20;

    quantity = 500;
    _myCodeno2 = 333;
  //  1Empno = 1290;
    Empnumber$ = 1111;
    total_sale = 350;
    myfavouratebankaccountnumber = 520763421;

    float salary;
    salary = 4600.50;

    printf("\nThe value of Quantity is %d\n",quantity);
    printf("\nThe value of Salary is %.2f\n",salary);
    printf("\nThe value of _myCodeno2 is %d\n",_myCodeno2);
 //   printf("\nThe value of 1Empno is %d\n",1Empno);
    printf("\nThe value of Empnumber$ is %d\n",Empnumber$);
    printf("\nThe value of total_sale is %d\n",total_sale);
    printf("\nThe value of myfavouratebankaccountnumber is %ld\n",myfavouratebankaccountnumber);
 //   printf("\nThe value of break is %d\n",break);

    return 0;
}
