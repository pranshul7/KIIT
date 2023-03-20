/* Que 4: Input 5 digit number and display middle digit */

#include<stdio.h>
int main()
{
	/* Declaring variables */

	int a, md ;
	
	/* Inputting number */

	printf("Enter the 5 digit number\n") ;
	scanf("%d", &a) ;
	
	/* Calculating middle digit */

	md = (a / 100) % 10 ;
	
	/* Displaying middle digit */
	
	printf("\nThe middle digit of the entered number is = %d\n", md) ;
	
	return 0 ;
}