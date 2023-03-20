/* Que 3: Find the minimum among three numbers */
/* Date: 20.10.20 */

#include<stdio.h>
int main()
{
	/* Variable declaration */
	int n1, n2, n3, m;
	
	/* Input 3 numbers */

	printf("Enter the three numbers\n");
	scanf("%d%d%d", &n1, &n2, &n3);
	
	/* Logic */
	if (n1<n2)
	{
		if (n1<n3)
			m=n1;
		else 
			m=n3;
	}
	else
	{
		if (n2<n3)
			m=n2;
		else
			m=n3;
	}
	
	/* Output */
	printf("\nMinimum among given 3 is = %d\n", m);
	
	return 0;
}