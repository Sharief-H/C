/** Programming Challenge -
    Count the Number of characters,words and sentences
    from a File
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int noc=0, now=0, nos=0;

    fp=fopen("C:\\test.txt","r");
    if(fp==NULL)
    {
        printf("\nUnable to open the file...");
        exit(0);
    }
    while((ch=fgetc(fp)) != EOF)
    {
       putchar(ch);
       if(ch==' ')
            now++;
        if(ch=='.')
        {
            now++;
            nos++;
        }
        noc++;
    }
    printf("\nNumber of Characters are ....=%d",noc);
    printf("\nNumber of Words are .........=%d",now);
    printf("\nNumber of Sentences are .....=%d",nos);
    fclose(fp);

	return(0);
}
