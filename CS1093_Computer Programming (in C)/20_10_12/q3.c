/* Que 3: Input 5 digit number and print its digits in the same order and in reverse order */

#include<stdio.h>
int main()
{
	/* Declaring variables */

	int a, D1, D2, D3, D4, D5 ;
	
	/* Inputting number */

	printf("Enter the 5 digit number\n") ;
	scanf("%d", &a) ;
	
	/* Calculating digits */

	D1 = a % 10 ;
	D2 = (a / 10) % 10 ;
	D3 = (a / 100) % 10 ;
	D4 = (a / 1000) % 10 ;
	D5 = a / 10000 ;
	
	/* Displaying digits in reverse order */
	
	printf("\n%d\n%d\n%d\n%d\n%d\n\n", D1, D2, D3, D4, D5) ;
	
	/* Displaying digits in same order */

	printf("\n%d\n%d\n%d\n%d\n%d\n", D5, D4, D3, D2, D1) ;
	
	return 0 ;
}