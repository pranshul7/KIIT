/* Que 1: Display middle number of 3/4/5 digit number */
/* Date: 20.10.20 */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	int n, m;
	
	/* Input number */
	printf("Enter the number\n");
	scanf("%d", &n);
	
	/* Logic */
	if ( n>=100 && n<=999)
	{
		m=(n/10)%10;
		printf("\nMiddle Number = %d\n", m);
	}
	else if ( n>=1000 && n<=9999)
	{
		m=(n/10)%100;
		printf("\nMiddle Number = %d\n", m);
	}
	else if ( n>=10000 && n<=99999)
	{
		m=(n/100)%10;
		printf("\nMiddle Number = %d\n", m);
	}
	else
		printf("\nThis program is designed to find middle number of a 3 digit or 4 digit or 5 digit number. Please enter a valid number !\n");
	
	return 0;
}