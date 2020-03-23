// Program to Demonstrate the working of Strings without using String Functions

#include<stdio.h>
#include<string.h>

int string_ln(char*);
void concat(char[], char[]);
int compare(char [], char []);
void copy(char *,char *);

int main()
{
   char str1[20],str2[20];
   int length, i;

   printf("\nEnter two strings :");
   gets(str1);
   gets(str2);

   // Compare 2 Strings
   if(compare(str1,str2)== 0)
		printf("\nstrings %s and %s are equal....\n",str1,str2);
   else
		printf("\nStrings %s and %s are not equal....\n",str1,str2);

    // Concate 2 Strings
   concat(str1, str2);

   // Length of a String
   length = string_ln(str1);
   printf("\nThe length of the given string %s is : %d...\n", str1, length);

   // Copying a String
   copy(str1,str2);

   return 0;
}
// Copy Function
void copy(char *str1,char *str2)
{
    int i = 0;
   while (str1[i] != '\0')
   {
      str2[i] = str1[i];
      i++;
   }
   str2[i] = '\0';
   printf("\nCopied String is %s.... \n", str2);
}
// Length Function
int string_ln(char *p)
{
   int count = 0;
   while (*p != '\0')
   {
      count++;
      p++;
   }
   return count;
}
// Concat Function
void concat(char str1[], char str2[])
{
   int i, j;
   i = strlen(str1);

   for (j = 0; str2[j] != '\0'; i++, j++)
      str1[i] = str2[j];

   str1[i] = '\0';
   printf("\nConcatinated string is :%s.....\n", str1);
}
// Compare Function
int compare(char str1[], char str2[])
{
    int i = 0;

   while (str1[i] == str2[i])
   {
      if (str1[i] == '\0' || str2[i] == '\0')
         break;
      i++;
   }

   if (str1[i] == '\0' && str2[i] == '\0')
      return 0;
   else
      return -1;
}
