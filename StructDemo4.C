
#include<stdio.h>
#include<stdlib.h>
struct date
{
    int day,month;
};
int main()
{
    struct date d[8];
	int i;
	for(i=0;i<8;i++)
	{
	    printf("\nENTER DATE %d : ",i+1);
		printf("\nENTER DAY : ");
		scanf("%d",&d[i].day);
		printf("ENTER MONTH : ");
		scanf("%d",&d[i].month);
		if(d[i].month>=1&&d[i].month<=12)
		{
		    if(((d[i].day>=30)&&(d[i].month==2))||((d[i].day>=31)&&(d[i].month==4||d[i].month==6||d[i].month==9||d[i].month==11)))
			{
			    printf("INCORRECT DAY\n");
            }
			else
				if(d[i].day>=32)
				{
				    printf("INCORRECT DAY\n");
                }
		}
	}
	for(i=0;i<8;i++)
	{
	    printf("\nMONTH OF DATE %d ",i+1);
		switch(d[i].month)
		{
		    case 1:printf("\nJANUARY");break;
			case 2:printf("\nFEBRUARY");break;
			case 3:printf("\nMARCH");break;
			case 4:printf("\nAPRIL");break;
			case 5:printf("\nMAY");break;
			case 6:printf("\nJUNE");break;
			case 7:printf("\nJULY");break;
			case 8:printf("\nAUGUST");break;
			case 9:printf("\nSEPTEMBER");break;
			case 10:printf("\nOCTOBER");break;
			case 11:printf("\nNOVEMBER");break;
			case 12:printf("\nDECEMBER");break;
			default:printf("\nINCORRECT MONTH");
		}
	}
    return(0);
}

