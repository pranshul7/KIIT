/* Que 4: Find the second highest number among 3 numbers */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	int n1, n2, n3, g2 ;
	
	/* Input */
	printf("Enter the 3 numbers\n") ;
	scanf("%d%d%d", &n1, &n2, &n3) ;
	
	/* Logic */
	
	g2 = (n1>n2)?((n1>n3)?((n2>n3)?n2:n3):((n1>n2)?n1:n2)):((n2>n3)?((n1>n3)?n1:n3):((n1>n2)?n1:n2)) ;
	
	/* Output */
	printf("\nThe second greatest number is %d\n", g2) ;
	
	return 0 ;
}