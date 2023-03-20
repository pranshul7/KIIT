/* Que 8: Find gcd(greatest common divisor) of 2 numbers. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n1,n2,r;

    // input 2 numbers
    printf("Enter the two numbers\n");
    scanf("%d%d", &n1, &n2);

    // calculate gcd
    while((n1%n2)!=0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;
    }

    // display output
    printf("\ngcd of the two numbers is = %d\n", n2);

    return 0;
}