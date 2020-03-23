/** Programming Challenge
    to convert the cases of a given String using pointers..

    1. Lower-case characters are converted to Upper-case and
    2. Upper-case characters are converted to Lower-case
*/
#include<stdio.h>
int main()
{
    char a[30];
    char *ptr;
    printf("Enter a String...");
    gets(a);

    ptr= a;
    while(*ptr != '\0')
    {
        if((*ptr >= 65) && (*ptr <= 90))
            printf("%c", *ptr+32);
        else
        {
            if((*ptr >= 97) && (*ptr <= 122))
                printf("%c", *ptr-32);
        else
                printf("%c",*ptr);
        }
        ptr++;
    }
    return(0);
}


