#include<stdio.h>
int main()
{
	int x, y ;
	printf("Enter the value of integer x\n") ;
	scanf("%d", &x) ;
	printf("Enter the value of integer y\n") ;
	scanf("%d", &y) ;
	
	printf("4x^2 + 3y + 5 = %d\n", ((4*x*x)+(3*y)+5)) ;
	
	return 0 ;
}