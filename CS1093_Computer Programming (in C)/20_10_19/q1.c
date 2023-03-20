/* Que 1: Assign a number to an unsigned char variable.
Then display two groups of 4-4 bits (out of total 8 bits) separately in decimal form and hexadecimal form.  */
/* Date: 19.10.20 */

#include<stdio.h>
int main()
{
	/* Variable declaration */

	unsigned char a=161, f4, s4 ;
	
	/* Logic */

	f4=(a&0x0F);
	s4=a>>4;
	
	/* Output */
	
	printf("Original number in decimal = %d\nOriginal number in hexadecimal = %x\n", a, a);
	
	printf("\nFirst 4 bit number in decimal = %d\nFirst 4 bit number in hexadecimal = %x\n", f4, f4);
	
	printf("\nSecond 4 bit number in decimal = %d\nSecond 4 bit number in hexadecimal = %x\n", s4, s4);
	
	return 0;
}