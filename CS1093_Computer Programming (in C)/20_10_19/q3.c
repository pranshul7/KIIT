/* Que 3: assign a number to an unsigned char variable.Then interchange the left 4 bits
and right 4 bits of the 8-bit binary value of that number.then display the value
of the new 8-bit binary value obtained, in decimal and hexadecimal */
/* Date: 19.10.20 */

#include<stdio.h>
int main()
{
	/* Variable declaration */

	unsigned char a=173, r4, l4, nn;

	/* Logic */

	r4 = a<<4;
	l4=a>>4;

	nn=r4|l4;

	/* Output */
	
	printf("Original number in decimal = %d\nOriginal number in hexadecimal = %x\n", a, a);
	printf("\nNew number in decimal = %d\nNew number in hexadecimal = %x\n", nn, nn);

	return 0;
}