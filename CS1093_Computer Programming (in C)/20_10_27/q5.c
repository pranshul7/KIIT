/* Que 5: Take 3 numbers and display them in descending order. */

#include<stdio.h>
int main()
{
	// Variable declaration
	int a, b, c;
	
	// Input 3 integers
	printf("Enter 3 integers\n");
	scanf("%d%d%d", &a, &b, &c);
	
	// Logic
	if ( a>b )
	{
		if ( a>c )
		{
			if ( b>c )
				printf ("%d > %d > %d \n", a, b, c) ;
			else if ( b<c )
				printf ("%d > %d > %d \n", a, c, b) ;
			else
				printf("%d > (%d = %d) \n", a, b, c);
		}
		else if ( a<c )
			printf ("%d > %d > %d \n", c, a, b) ;
		else
			printf ("(%d = %d) > %d \n", a, c, b) ;
	}
	else if ( a<b )
	{
		if ( b>c )
		{
			if ( a>c )
				printf ("%d > %d > %d \n", b, a, c) ;
			else if ( a<c )
				printf ("%d > %d > %d \n", b, c, a) ;
			else 
				printf("%d > (%d = %d) \n", b, a, c);
		}
		else if ( b<c )
			printf ("%d > %d > %d \n", c, b, a) ;
		else 
			printf ("(%d = %d) > %d \n", b, c, a) ;
	}
	else
	{
		if ( a>c )
			printf ("(%d = %d) > %d \n", a, b, c) ;
		else if ( a>c )
			printf ("%d > (%d = %d) \n", c, a, b) ;
		else
			printf ("%d = %d = %d \n", a, b, c) ;
	}
	
	return 0 ;
}