/* Que 5: Convert time in 24-hour format to 12-hour format */
/* Date: 20.10.20 */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	int h24, h12, min;
	
	/* Input time */
	printf("Enter the time in 24 hour format (Separately enter hour and minutes, respectively)\n");
	scanf("%d%d", &h24, &min);
	
	/* Logic */
	if (h24>=0 && h24<=23 && min>=0 && min<=59)
	{
	if (h24<12 && h24>=0)
		printf("\nThe time in 12 hour format is : %d : %d AM\n", h24, min);
	else if (h24==12)
		printf("\nThe time in 12 hour format is : %d : %d PM\n", h24, min);
	else if (h24<=23 && h24>12)
	{
		h12 = h24-12;
		printf("\nThe time in 12 hour format is: %d:%d PM\n", h12, min);
	}
	}
	else
		printf("\nPlease enter valid values\n");
	
	return 0;
}