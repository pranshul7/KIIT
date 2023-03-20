/* Que 1: Accept and display all data types (of Integer and real only) */

#include<stdio.h>
int main()
{
	/* Declaring variables */
	
	int I ;
	short int SI ;
	long L ;
	long long LL ;
	float F ;
	double D ;
	long double LD ;
	unsigned int UI ;
	unsigned short int USI ;
	unsigned long UL ;
	unsigned long long ULL ;
	
	/* Inputting different types of data values */
	
	printf("Enter the value for int type\n") ;
	scanf("%d", &I) ;
	printf("Enter the value for short int type\n") ;
	scanf("%hd", &SI) ;
	printf("Enter the value for long type\n") ;
	scanf("%ld", &L) ;
	printf("Enter the value for long long type\n") ;
	scanf("%lld", &LL) ;
	
	printf("Enter the value for float type\n") ;
	scanf("%f", &F) ;
	printf("Enter the value for double type\n") ;
	scanf("%lf", &D) ;
	printf("Enter the value for long double type\n") ;
	scanf("%Lf", &LD) ;
	
	printf("Enter the value for unsigned int type\n") ;
	scanf("%u", &UI) ;
	printf("Enter the value for unsigned short int type\n") ;
	scanf("%hu", &USI) ;
	printf("Enter the value for unsigned long type\n") ;
	scanf("%lu", &UL) ;
	printf("Enter the value for unsigned long long type\n") ;
	scanf("%llu", &ULL) ;
	
	/* Displaying all the different types of data values entered */
	
	printf("\nint type = %d\n", I) ;
	printf("short int type = %hd\n", SI) ;
	printf("long type = %ld\n", L) ;
	printf("long long type = %lld\n", LL) ;
	
	printf("float type = %f\n", F) ;
	printf("double type = %lf\n", D) ;
	printf("long double type = %Lf\n", LD) ;
	
	printf("unsigned int type = %u\n", UI) ;
	printf("unsigned short int type = %hu\n", USI) ;
	printf("unsigned long type = %lu\n", UL) ;
	printf("unsigned long long = %llu\n", ULL) ;
	
	return 0 ;
}