/* Demonstrating the usage of Comments in C Language
   Both the types are demonstrated in this program
   this is an example of multi-line comments      */

#include<stdio.h>  // A preprocessor directive

int main()  /*Main Function*/
{

    int age; //  an integer Variable
    printf("Enter Your Age : "); // prompting a user with a message
    scanf("%d", &age); /*Type Age*/
    printf("Age is %d : ",/*Your age here*/age);
    return 0 ;
}
