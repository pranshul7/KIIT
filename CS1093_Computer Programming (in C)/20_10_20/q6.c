/* Que 6: Find the earlier date from given two dates */
/* Date: 20.10.20 */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	int d1, m1, y1, d2, m2, y2;
	
	/* Input dates */
	printf("Enter the first date in dd<space>mm<space>yyyy format\n");
	scanf("%d%d%d", &d1, &m1, &y1);
	printf("\nEnter the second date in dd<space>mm<space>yyyy format\n");
	scanf("%d%d%d", &d2, &m2, &y2);
	
	/* Logic */
	if (y1<y2)
		printf("\nThe date %d.%d.%d is the earlier one\n", d1, m1, y1);
	else if (y2<y1)
		printf("\nThe date %d.%d.%d is the earlier one\n", d2, m2, y2);
	else
	{
		if (m1<m2)
			printf("\nThe date %d.%d.%d is the earlier one\n", d1, m1, y1);
		else if (m2<m1)
			printf("\nThe date %d.%d.%d is the earlier one\n", d2, m2, y2);
		else
		{
			if (d1<d2)
				printf("\nThe date %d.%d.%d is the earlier one\n", d1, m1, y1);
			else if (d2<d1)
				printf("\nThe date %d.%d.%d is the earlier one\n", d2, m2, y2);
			else
				printf("\nThe two dates are same\n");
		}
	}
	
	return 0;
}