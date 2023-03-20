/*Que 4: Find the range (in terms of exponents of 2) in which the input no is. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n,p;

    // input number
    printf("Enter the no.\t");
    scanf("%d", &n);

    // find the range
    for(p=1;p<n;)
    {
        p=p*2;
    }

    if(p==n)
        printf("\n%d\n", p);
    else
        printf("\nIn the range (%d,%d)\n", p/2, p);

    return 0;
}
