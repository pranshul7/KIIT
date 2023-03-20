/* Q8:  Print Fibonacci Series. */

#include<stdio.h>
int main()
{
    // input how many fibonacci numbers to print
    int n;

    printf("How many fibonacci numbers ??\t");
    scanf("%d", &n);

    // declare array for fibonacci numbers
    int x[n], i;

    // initialise first two fibonacci numbers
    x[0]=0;
    x[1]=1;

    // calculate fibonacci numbers and store in array
    for(i=2; i<n; i++)
    {
        x[i]=x[i-1]+x[i-2];
    }

    // display fibonacci numbers
    printf("\n\nFibonacci series : ");

    for(i=0; i<n; i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");

    return 0;
}