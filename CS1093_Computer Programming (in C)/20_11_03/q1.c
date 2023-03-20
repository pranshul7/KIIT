/* Que 1: Find summation (1/n!) from i 0 to n, where n is provided by user. */

#include<stdio.h>
int main()
{
    // Variable declaration
    int lim;

    // input limit
    printf("Enter the limit\n");
    scanf("%d", &lim);

    // calculate summation
    float sum=1;
    int i=1, d=1;
    while(i<=lim)
    {
        d=d*i;
        sum=sum+(1.0/d);
        i++;
    }

    // display output
    printf("\nSummation = %f\n", sum);

    return 0;
}