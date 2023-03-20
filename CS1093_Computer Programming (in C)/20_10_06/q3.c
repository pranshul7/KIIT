#include<stdio.h>
int main()
{
	int x, y, z ;
	
	printf("Enter the values of integers x , y and z\n") ;
	scanf("%d %d %d", &x, &y, &z) ;
	
	printf("\t\t%d\n\t%d\t\t%d\n%d\t\t%d\t\t%d\n\t%d\t\t%d\n\t\t%d\n", x, y, y*y, z, z*z, z*z*z, y, y*y, x) ;
	
	return 0 ;
}