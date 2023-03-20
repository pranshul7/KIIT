/* Que 6: Take a number between 20 to 99 , then display it in words. */

#include<stdio.h>
int main()
{
	// Variable declaration
	int n, fd, sd;
	
	// Input number
	printf("Enter the number between 20 to 99\n");
	scanf("%d", &n);
	
	// Logic
	fd=n%10;
	sd=n/10;
	
	if (n>=20 && n<=99)
	{
		printf("\nThe input number in words is :  ");
	switch (sd)
	{
		case 2: printf("Twenty ");
						break ;
		case 3: printf("Thirty ");
						break ;
		case 4: printf("Fourty ");
						break ;
		case 5: printf("Fifty ");
						break ;
		case 6: printf("Sixty ");
						break ;
		case 7: printf("Seventy ");
						break ;
		case 8: printf("Eighty ");
						break ;
		case 9: printf("Ninety ");
						break ;
	}
	
	switch (fd)
	{
		case 0: 
						break ;
		case 1: printf("One\n");
						break ;
		case 2: printf("Two\n");
						break ;
		case 3: printf("Three\n");
						break ;
		case 4: printf("Four\n");
						break ;
		case 5: printf("Five\n");
						break ;
		case 6: printf("Six\n");
						break ;
		case 7: printf("Seven\n");
						break ;
		case 8: printf("Eight\n");
						break ;
		case 9: printf("Nine\n");
						break ;
	}
	}
	else
		printf("\nEnter valid value\n");
		
	return 0;
}