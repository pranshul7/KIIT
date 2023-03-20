/* Que 2: Assign a number to an int variable.
Then display all four groups of 8-8 bits (out of total 32 bits) separately in decimal and hexadecimal form.*/
/*Date: 19.10.20 */

#include<stdio.h>
int main()
{
	/* Variable declaration */

	int a=429417295 ;
	int f8, s8, t8, fo8;
	
	/* Logic */

	f8=a&0x000000FF;
	s8=(a&0x0000FF00)>>8;
	t8=(a&0x00FF0000)>>16;
	fo8=a>>24;
	
	/* Output */
	
	printf("Original number in decimal = %d\nOriginal number in hexadecimal = %x\n", a, a);
	
	printf("\nFirst 8 bits in decimal = %d\nFirst 8 bits in hexadecimal = %x\n", f8, f8);
	
	printf("\nSecond 8 bits in decimal = %d\nSecond 8 bits in hexadecimal = %x\n", s8, s8);
	
	printf("\nThird 8 bits in decimal = %d\nThird 8 bits in hexadecimal = %x\n", t8, t8);
	
	printf("\nFourth 8 bits in decimal = %d\nFourth 8 bits in hexadecimal = %x\n", fo8, fo8);
	
	return 0;
}