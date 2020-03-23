/** Practice Program to show the working of rewind function
*/
#include<stdlib.h>
#include<stdio.h>
int main()
{	FILE *fp;
	char ch;
	int n,i=1;
	fp=fopen("C:\\test.c","r");
	if(fp==NULL)
	{   printf("unable to open");
		exit(0);
	}
	printf("\nTHE ORIGINAL TEXT IS : \n");
	while((ch=fgetc(fp))!=EOF)
	{	putchar(ch);	}
	printf("\nENTER THE NUMBER OF CHARACTERS YOU WISH TO VIEW");
	scanf("%d",&n);
	rewind(fp);
	while(((ch=fgetc(fp))!=EOF)&&(i<=n))
	{	putchar(ch);
		i++;
	}
	fclose(fp);
	getchar();
	return(0);
}
