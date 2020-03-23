/** Programming Challenge -
    Copy the contents of one file into another File
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp, *ft;
    char ch;
    fp = fopen("C:\\FileCopy.c","r");
    ft = fopen("C:\\Target.txt","w");

    if(fp==NULL || ft==NULL)
    {
        printf("\nUnable to open...");
        exit(0);
    }
    printf("\nContents of the source file...");
    while(!feof(fp))
    {
        ch=getc(fp);
        putchar(ch);
        fprintf(ft,"%c",ch);
    }
    fclose(fp);
    fclose(ft);
    ft = fopen("C:\\Target.txt","r");
    printf("\nContents of the Target file...");
    while(!feof(ft))
    {
        ch=getc(ft);
        putchar(ch);
    }
    fclose(ft);
    getchar();
	return(0);
}


