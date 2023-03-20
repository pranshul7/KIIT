/* Que 7 (Part 2): Swap 2 numbers without using extra variable */

#include<stdio.h>
int main()
{
	/* Declaring variables */

	int a= 5, b= 3;
	
	/* Displaying initial values */
	
	printf("Initially the values are :\ta = %d\tb = %d\n", a, b) ;
	
	/* Swapping of numbers */
	
	a=a+b ;
	b=a-b ;
	a=a-b ;
	
	/* Displaying the output */
	
	printf("\nAfter swapping, the values are :\ta = %d\tb = %d\n", a, b) ;
	
	return 0 ;
}