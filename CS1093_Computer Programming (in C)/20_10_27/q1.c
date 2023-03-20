/* Que 1: Take 3 items price then display the final discounted amount to be paid */

#include<stdio.h>
int main()
{
	// Variable declaration
	float p1, p2, p3, fa, t;
	int dis=0;
	
	// Input price of 3 items
	printf("Enter the price of 3 items\n");
	scanf("%f%f%f", &p1, &p2, &p3);
	
	// Logic
	t=p1+p2+p3;
	
	if (t>5000)
	{
		if (p1>3000 || p2>3000 || p3>3000)
			dis=60;
		else
			dis=50;
	}
	else if (t>4000)
	{
		if (p1>2000 || p2>2000 || p3>2000)
			dis=40;
		else
			dis=30;
	}
	else if (t>2000)
		dis=20;
	
	fa=((100-dis)*t)/100;
	
	// Display output
	printf("\nYou have got %d%% discount, and the final amount to be paid by you is %f\n", dis, fa);
	
	return 0;
}