/* Que 2: Find whether a year is leap year or not */
/* Date: 20.10.20 */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	int y;
	
	/* Input year */
	printf("Enter the year\n");
	scanf("%d", &y);
	
	/* Logic */
	if (((y%4==0) && (y%100!=0)) || (y%400==0))
		printf("\nThe year is a leap year\n");
	else
		printf("\nThe year is not a leap year \n");
	
	return 0;
}