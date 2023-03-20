/* Que 5: Input 6 digit number and display middle digits */

#include<stdio.h>
int main()
{
	/* Declaring variables */

	int a, D3, D4 ;
	
	/* Inputting number */

	printf("Enter the 6 digit number\n");
	scanf("%d", &a) ;
	
	/* Calculating middle digits */

	D3 = (a / 100) % 10 ;
	D4 = (a / 1000) % 10 ;
	
	/* Displaying middle digits */
	
	printf("\nThe middle digits of the number are = %d%d\n", D4, D3) ;
	
	return 0 ;
}