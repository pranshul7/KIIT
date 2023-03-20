/* Que 6 (Part 1): Check whether the square of the middle digit of a 3 digit number is equal to the rest of 
the digits in the original order or not and display Valid if it is , and invalid if it is not. */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	int n, d1, d2, d3, sq, rn ;
	
	/* Input */
	printf("Enter the 3 digit number\n") ;
	scanf("%d", &n) ;
	
	/* Logic */
	
	d1 = n%10 ;
	d2 = (n/10)%10 ;
	d3 = n/100 ;

	rn = (d3*10)+d1 ;
	sq = d2*d2 ;
	
	/* Displaying output */

	(rn==sq)?(printf("\nValid\n")):(printf("\nInvalid\n")) ;
	
	return 0 ;
}