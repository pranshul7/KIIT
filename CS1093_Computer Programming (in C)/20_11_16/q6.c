/*Que 6: Compute m to the power n. */

#include<stdio.h>
int main()
{
    // variable declaration and initialization
    int m,n,r=1;

    // input base and power
    printf("Enter the base value\t");
    scanf("%d", &m);
    printf("Enter the power value\t");
    scanf("%d", &n);

    // compute m to the power n
    for(;n>0;n--)
    {
        r=r*m;
    }

    // print the result
    printf("\nResult = %d\n",r);

    return 0;
}