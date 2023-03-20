/* Que 4: Assign a number to an int variable. Then interchange 2nd group of 8 bits from left 
hand side and 2nd group of 8 bits from right hand side. Then display the new number formed in decimal and hexadecimal form.*/
/* Date: 19.10.20 */

#include<stdio.h>
int main()
{
	/* Variable declaration */

	int a=429417295 ;
	int nn, n1, n2, n3;
	
	/* Logic */

	n1=a&0xFF0000FF;
	n2=(a&0x0000FF00)<<8;
	n3=(a&0x00FF0000)>>8;
	nn=n1|n2|n3;
	
	/* Output */
	
	printf("Orginal number in decimal = %d\nOriginal number in hexadecimal = %x\n", a, a);
	
	printf("\nNew number in decimal = %d\nNew number in hexadecimal = %x\n", nn, nn);
	
	return 0;
}