
#include<stdio.h>
struct complex
{	float real;
	float imag;
}c1,c2;
int main()
{	float x,y,div;

	printf("\nFIRST COMPLEX NUMBER : ");
	printf("\nENTER REAL PART OF FIRST COMPLEX NUMBER : ");
	scanf("%f",&c1.real);
	printf("ENTER IMAGINARY PART OF FIRST COMPLEX NUMBER : ");
	scanf("%f",&c1.imag);
	printf("\n\nSECOND COMPLEX NUMBER : ");
	printf("\nENTER REAL PART OF SECOND COMPLEX NUMBER : ");
	scanf("%f",&c2.real);
	printf("ENTER IMAGINARY PART OF SECOND COMPLEX NUMBER : ");
	scanf("%f",&c2.imag);
	printf("\n\nFIRST COMPLEX NUMBER : ");
	printf("\n%.2f +i %.2f",c1.real,c1.imag);
	printf("\n\nSECOND COMPLEX NUMBER : ");
	printf("\n%.2f +i %.2f",c2.real,c2.imag);

	/*	ADDITION	*/
	printf("\n\nADDITION");
	x=c1.real+c2.real;
	y=c1.imag+c2.imag;
	printf("\n%.2f +i %.2f",x,y);

	/*	SUBTRACTION	*/
	printf("\n\nSUBTRACTION");
	x=c1.real-c2.real;
	y=c1.imag-c2.imag;
	printf("\n%.2f +i %.2f",x,y);

	/*	MULTIPLICATION	*/
	printf("\n\nMULTIPLICATION");
	x=(c1.real*c2.real)-(c1.imag*c2.imag);
	y=(c1.real*c2.imag)+(c1.imag*c2.real);
	printf("\n%.2f +i %.2f",x,y);

	/*	DIVISION	*/
	printf("\n\nDIVISION");
	div=(c2.real*c2.real)+(c2.imag*c2.imag);
	x=((c1.real*c2.real)+(c1.imag*c2.imag))/div;
	y=((c1.imag*c2.real)-(c1.real*c2.imag))/div;
	printf("\n%.2f +i %.2f",x,y);

return(0);
}



