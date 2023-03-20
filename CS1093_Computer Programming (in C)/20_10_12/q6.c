/* Que 6: Input a 4 digit number and then display the reverse number */

#include<stdio.h>
int main()
{
	/* Declaring variables */
	
	int a, D1, D2, D3, D4, rn ;
	
	/* Inputting number */

	printf("Enter the 4 digit number\n") ;
	scanf("%d", &a) ;
	
	/* Calculating digits */

	D1 = a % 10 ;
	D2 = (a / 10) % 10 ;
	D3 = (a / 100) % 10 ;
	D4 = a / 1000 ;
	
	/* Calculating reverse number */

	rn = ((D1*1000) + (D2*100) + (D3*10) + D4) ;
	
	/* Displaying reverse number */
	
	printf("\nThe reversed number is = %d\n", rn) ;
	
	return 0 ;
}