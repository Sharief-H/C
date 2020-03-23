// Demonstrating do=while Loop in C Language
//Program to display MENU using do..while

#include<stdio.h>

int main()
{
    int choice, n1=100, n2=50;
    printf("n1=100 and  n2=50 \n");
    do
    {
        printf("=== Menu ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("\nEnter your choice.....");
        scanf("%d",&choice);

        switch (choice)
        {
            case  1: printf("\nAddition = %d \n", n1 + n2);
                     break;
            case  2: printf("\nSubtraction = %d \n", n1 - n2);
                     break;
            case  3: printf("\nThe Multiplication = %d \n", n1 * n2);
                     break;
            default: printf("\nWrong Choice......Enter again...\n");
                     break;
        }
      } while (choice != 4);
      return 0;
}
