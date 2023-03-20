/* Que 5: Find the smallest number among 4 numbers */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	int n1, n2, n3, n4, s ;
	
	/* Input */
	printf("Enter the 4 numbers\n") ;
	scanf("%d%d%d%d", &n1, &n2, &n3, &n4) ;
	
	/* Logic */
	
	s = (((n1<n2)&&(n1<n3)&&(n1<n4))?n1:(((n2<n1)&&(n2<n3)&&(n2<n4))?n2:(((n3<n1)&&(n3<n2)&&(n3<n4))?n3:n4))) ;
	
	/* Output */
	printf("\nThe smallest number is %d\n", s) ;
	
	return 0 ;
}