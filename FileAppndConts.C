/** Programming Challenge -
    Write a Program to open an existing file and add
    information at the end of file.
    Display contents before and after appending the text.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch,a[50];
    FILE *fp;

    fp=fopen("C:\\new.txt","a+");
    if(fp==NULL)
    {
        printf("\nUnable to open the File....");
        getchar();
        exit(0);
    }
    printf("\nBefore Appending the Contents are..");
    while(!feof(fp))
    {
        ch = fgetc(fp);
        putchar(ch);
    }
    printf("\nEnter some Text for Appending.....");
    gets(a);
    fprintf(fp,"%s",a);
    printf("\nContents After Appending the text....");
    rewind(fp);
    while(!feof(fp))
    {
        ch = fgetc(fp);
        putchar(ch);
    }
    fclose(fp);
	return(0);
}
