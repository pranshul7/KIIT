/* Que 3: Find whether a year is a leap year or not. If it is a leap year display 1 , and if it is not a leap year display 0. */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	
	int y ;
	
	/* Input */
	
	printf("Enter the year \n") ;
	scanf("%d", &y) ;
	
	/* Logic */
	
	(((y%400)==0) || (((y%4)==0) && ((y%100)!=0)))?(printf("\nA leap Year\n")):(printf("\nNot a leap year\n")) ;
	
	return 0 ;
}