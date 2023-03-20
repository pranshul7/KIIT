/* Que 2: Take two times and display the difference between them */

#include<stdio.h>
int main()
{
	// Variable declaration
	int h1, h2, m1, m2, hd, md;
	
	// Input time values
	printf("Enter the first time in \"hh mm\" & 24-hour format\n");
	scanf("%d%d", &h1, &m1);
	
	printf("\nEnter the second time in \"hh mm\" & 24-hour format\n");
	scanf("%d%d", &h2, &m2);
	
	// Logic
	if (h1>h2)
	{
		if (m1>=m2)
		{
			md=m1-m2;
			hd=h1-h2;
		}
		else
		{
			md=(m1+60)-m2;
			hd=(h1-1)-h2;
		}
	}
	else if (h1<h2)
	{
		if (m2>=m1)
		{
			md=m2-m1;
			hd=h2-h1;
		}
		else
		{
			md=(m2+60)-m1;
			hd=(h2-1)-h1;
		}
	}
	else
	{
		if (m1>=m2)
			md=m1-m2;
		else
			md=m2-m1;
		
		hd=0;
	}
	
	// Display output
	printf("\nThe difference in the times is %d hours & %d minutes\n", hd, md);
	
	return 0;
}