/** Program to find the charges of Electricity BILL
*/
#include<stdio.h>
int main()
{
    int unit;
    float charge;

    printf("Enter the Units Consumed...");
    scanf("%d",&unit);

    if(unit<0)
    {
        printf("Number of units cannot be less than zero");
        exit(0);
    }
    else
    {
        if(unit>=0 && unit<=200)
                charge = 0.5 * unit;
        else if(unit>201 && unit<=400)
                charge = 100 + (0.65 * (unit - 200));
        else if(unit>401 && unit<=600)
            charge = 230 + (0.8 * (unit - 400));
        else if(unit>600)
            charge = 390 + (0.9 * (unit - 600));
     }
     printf("The Total Charges are...%4.2f",charge);
 return(0);
}

