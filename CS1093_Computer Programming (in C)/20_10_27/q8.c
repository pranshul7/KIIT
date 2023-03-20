/* Que 8: Take a number and display the absolute value */

#include<stdio.h>
int main()
{
	// Variable declaration
	int n, mod;
	
	// Input number
	printf("Enter the number\n");
	scanf("%d", &n);
	
	// Logic
	if (n<0)
		mod=n*(-1);
	else
		mod=n;
	
	// Output
	printf("\nThe absolute value of the number is %d", mod);
	
	return 0;
}