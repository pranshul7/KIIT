/* Que 7: Take a positive integer and round it upto 1/2/3 places as asked by user. */

#include<stdio.h>
int main()
{
	// Variable declaration
	int n, p, rn;
	
	// Input a positive integer
	printf("Enter a positive integer\n");
	scanf("%d", &n);
	
	// Input upto how many places to round up the no
	printf("\nUpto how many places you want to round uo the no.? 1,2 or 3 ???\n");
	scanf("%d", &p);
	
	// Logic
	if (n>=0 && (p==1 || p==2 || p==3))
	{
	if (p==1)
	{
			if ((n%10)<5)
				rn=n-(n%10);
			else if ((n%10)>=5)
				rn=(n-(n%10))+10;
	}
	else if (p==2)
	{
			if ((n%100)<50)
				rn=n-(n%100);
			else if ((n%100)>=50)
				rn=(n-(n%100))+100;
	}
	else if (p==3)
	{
		if ((n%1000)<500)
			rn=n-(n%1000);
		else if ((n%1000)>=500)
			rn=(n-(n%1000))+1000;
	}
	
	// Output
	printf("\nThe round up number is = %d\n", rn);
	
	}
	else
		printf("\nEnter valid values\n");

	return 0;
}