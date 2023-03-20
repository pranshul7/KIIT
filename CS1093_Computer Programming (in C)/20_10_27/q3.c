/* Que 3: Take two dates and display the difference between them. (Assume every month to be of 31 days) */

#include<stdio.h>
int main()
{
	// Variable declaration
	int d1, m1, y1, d2, m2, y2, ed, em, ey, od, om, oy, dd, md, yd;
	
	// Input date values
	printf("In this calculator every month of the calender is assumed to be of 31 days.\n\n");
	printf("Enter the first date in \"dd mm yyyy\" format\n");
	scanf("%d%d%d", &d1, &m1, &y1);
	
	printf("Enter the second date in \"dd mm yyyy\" format\n");
	scanf("%d%d%d", &d2, &m2, &y2);
	
	// Logic
	if (d1>0 && d1<=31 && d2>0 && d2<=31 && m1>0 && m1<=12 && m2>0 && m2<=12 && y1>0 && y2>0)
	{
	if (y1>y2)
	{
		od=d1;
		om=m1;
		oy=y1;
		ed=d2;
		em=m2;
		ey=y2;
	}
	else if (y2>y1)
	{
		od=d2;
		om=m2;
		oy=y2;
		ed=d1;
		em=m1;
		ey=y1;
	}
	else
	{
		if (m1>m2)
		{
			od=d1;
			om=m1;
			oy=y1;
			ed=d2;
			em=m2;
			ey=y2;
		}
		else if (m2>m1)
		{
			od=d2;
			om=m2;
			oy=y2;
			ed=d1;
			em=m1;
			ey=y1;
		}
		else
		{
			if (d1>d2)
			{
				od=d1;
				om=m1;
				oy=y1;
				ed=d2;
				em=m2;
				ey=y2;
			}
			else if (d2>d1)
			{
				od=d2;
				om=m2;
				oy=y2;
				ed=d1;
				em=m1;
				ey=y1;
			}
			else
				printf("\nThe two dates are same\n");
		}
	}
	
	dd=(od+31)-ed;
	md=(om+11)-em;
	yd=(oy-1)-ey;
	
	md=(dd/31)+md;
	yd=(md/12)+yd;
	md=md%12;
	dd=dd%31;
	
	// Display output
	printf("\nThe difference between the entered dates is of %d days %d months %d years\n", dd, md, yd);
	}
	else
		printf("\nEnter valid dates\n");
		
	return 0;
}