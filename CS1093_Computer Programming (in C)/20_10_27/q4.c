/* Que 4: Take 2 integers , ask user which operation he wants to perform from + - / * % ,
and then display the output after operating those 2 integers with that operator. */

#include<stdio.h>
int main()
{
	// Variable declaration
	int a, b;
	char c;
	
	// Input 2 integers
	printf("Enter the 2 integers\n");
	scanf("%d%d", &a, &b);
	
	// Input operator
	printf("\nEnter which operation you want to perform out of  +,-,/,*,%%\n");
	scanf(" %c", &c);
	
	// Logic
	switch (c)
	{
		case '+': printf("\n%d\n", a+b);
					   break ;
		
		case '-': printf("\n%d\n", a-b);
		  			break ;
		
		case '/': printf("\n%d\n", a/b);
		  			break ;
		  			
		case '*': printf("\n%d\n", a*b);
		   		    break ;
		   		    
		case '%': printf("\n%d\n", a%b);
		                break ;
		               
		default : printf("\nEnter valid operator\n");
	}
	
	return 0;
}