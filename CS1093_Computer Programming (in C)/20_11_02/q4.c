/* Que 4: Find Summation (1/i) for i 1 to n. n provided by user. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n;

    // input n
    printf("Enter the value of n\n");
    scanf("%d", &n);

    // logic
    int i=1;
    float res=0;
    while(i<=n)
    {
        res=res+(1.0/i);
        i++;
    }

    // display output
    printf("\nSummation = %f\n", res);

    return 0;
}