//Program to demonstrate the opening and closing of files in C Language

#include<stdio.h>
#include<stdlib.h>

int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("C:\\Testing.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   printf("Enter num: ");
   scanf("%d",&num);
   fprintf(fptr,"%d",num);
   fclose(fptr);

   if ((fptr = fopen("C:\\Testing.txt","r")) == NULL)
   {
       printf("Error! opening file");
       exit(1);
   }
   fscanf(fptr,"%d", &num);
   printf("Value of n from File is...%d", num);
   fclose(fptr);
   return 0;
}
