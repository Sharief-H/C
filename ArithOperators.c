 // Demonstrating Arithmetic Operators in C Language

 #include <stdio.h>

 int main()
 {
 	int a = 10,b = 4, c;

 	c = a+b;
	printf("a+b = %d \n",c);

 	c = a-b;
 	printf("a-b = %d \n",c);

 	c = a*b;
 	printf("a*b = %d \n",c);

 	c = a/b;
 	printf("a/b = %d \n",c);

 	c = a%b;
 	printf("Remainder when %d divided by %d = %d \n",a,b,c);
 	return 0;
 }

