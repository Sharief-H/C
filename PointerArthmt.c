// Demonstrating Pointer arithmetic in C Language
#include<stdio.h>
int main()
{
    int a[10],b[10],*p,*q,i;
    for(i=0;i<3;i++)
    {
        printf("\n\tENTER THE ELEMENT FOR FIRST SET : ");
		scanf("%d",&a[i]);
	}
    p=a; // or p = &a[0];
    for(i=0;i<3;i++)
	{
	    printf("\n\tENTER THE ELEMENT FOR SECOND SET : ");
		scanf("%d",&b[i]);
	}
    q=b;
    printf("\n\tThe Address of a is ...%p",p);
    printf("\n\tThe Address of a is ...%p",a);
    printf("\n\tThe Address of b is ...%p",q);
    printf("\n\tThe Address of b is ...%p",b);
    //p arithmetic
    printf("\n\n\tVALUE AT P THAT IS A[0] : %d",*p);
    p++;
    printf("\n\tVALUE AT P+1 THAT IS A[1] : %d",*p);
    //q arithmetic
    printf("\n\n\tVALUE AT Q THAT IS B[0] : %d",*q);
    q++;
    printf("\n\tVALUE AT Q+1 THAT IS B[1] : %d",*q);
    //p arithmetic
    p=a;
    p+=2;
    printf("\n\n\tVALUE AT P+2 THAT IS A[2] : %d",*p);
    p-=2;
    printf("\n\tVALUE AT P THAT IS A[0] : %d",*p);
    //p and q arithmetic
    p=a;q=b;
    printf("\n\n\tVALUE OF P+Q : %d",(*p)+(*q));
    printf("\n\tVALUE OF P-Q : %d",(*p)-(*q));
    printf("\n\tVALUE OF P*Q : %d",(*p)*(*q));
 return(0);
}





