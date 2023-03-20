/* Que 8: Input 4 digit number then display 0 if they are equal and 1 if they are not equal */

#include<stdio.h>
int main()
{
	/* Declaring variables */
	
	int a, D1, D2, D3, D4, rn ;
	
	/* Input 4 digit number */
	
	printf("Enter the 4 digit number\n") ;
	scanf("%d", &a) ;
	
	/* Finding digits of the number */
	
	D1 = a % 10 ;
	D2 = (a / 10) % 10 ;
	D3 = (a / 100) % 10 ;
	D4 = a / 1000 ;
	
	/* Reversing the number */
	
	rn = ((D1*1000) + (D2*100) + (D3*10) + D4) ;
	
	/* Displaying the reversed number */
	
	printf("\nThe reversed number is = %d\n", rn) ;
	
	/* Comparing the number and its reverse and displaying the appropriate output */
	
	(a==rn)?(printf("\nSince the numbers are equal the output is 0\n")):(printf("\nSince the numbers are not equal the output is 1\n")) ;
	
	return 0 ;
}