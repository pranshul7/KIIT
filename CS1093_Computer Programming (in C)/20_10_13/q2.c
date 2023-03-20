/* Que 2: Find the greatest among 3 numbers */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	
	int n1, n2, n3, g ;
	
	/* Input */
	
	printf("Enter the 3 numbers\n") ;
	scanf("%d%d%d", &n1, &n2, &n3) ;
	
	/* Logic */
	
	g = (n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3) ;
	
	/* Output */
	
	printf("\nThe greatest number is %d\n", g) ;
	
	return 0 ;
}