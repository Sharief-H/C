/** Program to Demonstrate the working of Strings using String Functions
   1. String Compare - strcmp(s1,s2) - int (0/-1)
   2. String Concatenate - strcat(s1,s2)
   3. String Length - strlen(s1) - int
   4. String Copy - strcpy(s1,s2)
*/
#include<stdio.h>
#include<string.h>


int main()
{

    char str1[20],str2[20];
    int len;

    printf("\nEnter two Strings...");
    gets(str1);
    gets(str2);

    if(strcmp(str1,str2) == 0)
        printf("Strings %s and %s are Equal...",str1,str2);
    else
        printf("Strings %s and %s are NOT Equal...",str1,str2);

    // Concat Function
    strcat(str1,str2);
     printf("\nConcatenated String is %s....\n",str1);

    // Length Function
    len = strlen(str1);
    printf("\n The Length is....%d\n",len);

    // copy Function
    strcpy(str1,str2);
    printf("\nCopied String is %s....\n", str2);

    return 0;

}
