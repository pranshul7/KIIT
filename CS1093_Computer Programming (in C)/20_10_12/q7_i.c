/* Que 7 (Part 1): Swap 2 numbers using extra variable */

#include<stdio.h>
int main()
{
	/* Declaring variables */

	int a= 5, b= 3, c;

	/* Displaying initial values */

	printf("Initially the values are :\ta = %d\tb = %d\n", a, b) ;

	/* Swapping of numbers */

	c=a;
	a=b;
	b=c;

	/* Displaying the output */

	printf("\nAfter swapping, the values are :\ta = %d\tb = %d\n", a, b) ;

	return 0 ;
}