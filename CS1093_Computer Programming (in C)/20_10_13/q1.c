/* Que 1: Find the greatest among 2 numbers */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	int n1, n2, g ;
	
	/* Values Input */
	
	printf("Enter the two numbers\n") ;
	scanf("%d%d", &n1, &n2) ;
	
	/* Logic */
	
	g = (n1>n2)?n1:n2 ;
	
	/* Output */
	
	printf("\nThe greatest number is %d\n", g) ;
	
	return 0 ;
}