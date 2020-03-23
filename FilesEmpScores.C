/** Programming Challenge -
    Create Separate Files for Employees Data
    based on the IQ score ( <90 - fail.c and >=90 - Pass.c )
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*pass,*fail;
	char a[10];
	int score,c=1;

	fp=fopen("C:\\test.c","w");
	if(fp==NULL)
	{
		printf("\nUnable to open....");
		getchar();
		exit(0);
	}
	fprintf(fp,"EMPNAME\t\tIQ SCORE\n");
	do
	{
		printf("\nEnter the Name of the Candidate... ");
		scanf("%s",a);
		printf("\nEnter IQ SCore... ");
		scanf("%d",&score);
		fprintf(fp,"%s\t\t%d\n",a,score);
		printf("\nTo Add more data press 1 (else exit) ");
		scanf("%d",&c);
	}while(c==1);
	fclose(fp);

	fp=fopen("C:\\test.c","r");
	printf("\n\ncontents of test file are...\n");
	fscanf(fp,"EMPNAME\t\tIQ SCORE\n");
	while(!feof(fp))
	{
		fscanf(fp,"%s\t\t%d\n",a,&score);
		printf("%s\t%d\n",a,score);
	}
	fclose(fp);

	fp=fopen("C:\\test.c","r");
	pass=fopen("C:\\pass.c","w");
	fail=fopen("C:\\fail.c","w");
	fscanf(fp,"EMPNAME\t\tIQ SCORE\n");
	fprintf(pass,"EMPNAME\t\tIQ SCORE\n");
	fprintf(fail,"EMPNAME\t\tIQ SCORE\n");
	while(!feof(fp))
	{
		fscanf(fp,"%s\t\t%d\n",a,&score);
		if(score>=90)
		{
			fprintf(pass,"%s\t\t%d\n",a,score);
		}
		else
		{
			fprintf(fail,"%s\t\t%d\n",a,score);
		}
	}
	fclose(fail);
	fclose(pass);
	fclose(fp);

	pass=fopen("C:\\pass.c","r");
	printf("\ncontents of pass file are...\n");
	fscanf(pass,"EMPNAME\t\tIQ SCORE\n");
	while(!feof(pass))
	{
		fscanf(pass,"%s\t\t%d\n",a,&score);
		printf("%s\t%d\n",a,score);
	}
	fclose(pass);

	fail=fopen("C:\\fail.c","r");
	printf("\ncontents of fail file are....\n");
	fscanf(fail,"EMPNAME\t\tIQ SCORE\n");
	while(!feof(fail))
	{
		fscanf(fail,"%s\t\t%d\n",a,&score);
		printf("%s\t%d\n",a,score);
	}
	fclose(fail);

	return(0);
}


