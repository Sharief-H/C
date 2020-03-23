/** Program to find the nature of the ROOTS
    1. if determinant = 0, ROOTS ARE REAL AND EQUAL
    2. if determinant < 0, ROOTS ARE IMAGINARY
    3. if determinant > 0, ROOTS ARE REAL AND UNEQUAL
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float det, r1, r2;
    printf("\nEnter the values of a, b and c....");
    scanf("%d%d%d",&a,&b,&c);

    det = (b*b) - (4*a*c);
    if(det<0)
        printf("\n Roots are IMAGINARY....");
    else
    {
            r1 = ((-b) + sqrt(det))/ (2*a);
            r1 = ((-b) - sqrt(det))/ (2*a);
            if(det==0)
                printf("\n Roots are REAL and EQUAL....");
            else
                printf("\n Roots are REAL and UNEQUAL....");
    }
    return(0);
}
