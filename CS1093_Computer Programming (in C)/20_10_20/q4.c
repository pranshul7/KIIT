/* Que 4: Calculate discount for the items purchased */
/* Date: 20.10.20 */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	float p1, p2, p3, t, fa;
	int dis;
	
	/* Input cost of 3 items */
	printf("Enter the cost of the 3 items purchased\n");
	scanf("%f%f%f", &p1, &p2, &p3);
	
	/* Logic */
	t=p1+p2+p3;
	
	if (t>5000)
		dis=20;
	else if (t>3000)
		dis=10;
	else if (t>1000)
		dis=5;
	else
		dis=0;
	
	fa=(((100-dis)*t)/100);
	
	/* Output */
	printf("\nYou are rewarded %d%% discount and hence the amount to be paid by you is = %f\n",dis, fa);
	
	return 0;
	
}