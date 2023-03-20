/* Que 2: Input an integer in different forms and display it in other forms */

#include<stdio.h>
int main()
{
	/* Declaring variables*/

	int I, O, H ;
	
	/* Decimal form*/

	printf("Enter the number in decimal form\n") ;
	scanf("%d", &I) ;
	printf("\nThe entered number in decimal form is = %d\n", I) ;
	printf("The entered number in octal form is = %o\n", I) ;
	printf("The entered number in hexadecimal form is = %x\n\n", I) ;
	
	/* Octal form */

	printf("Enter the number in octal form\n") ;
	scanf("%i", &O) ;
	printf("\nThe entered number in decimal form is = %d\n", O) ;
	printf("The entered number in octal form is = %o\n", O) ;
	printf("The entered number in hexadecimal form is = %x\n\n", O) ;
	
	/* Hexadecimal form */
	
	printf("Enter the number in hexadecimal form\n") ;
	scanf("%i", &H) ;
	printf("\nThe entered number in decimal form is = %d\n", H) ;
	printf("The entered number in octal form is = %o\n", H) ;
	printf("The entered number in hexadecimal form is = %x\n\n", H) ;
	
	return 0 ;
}