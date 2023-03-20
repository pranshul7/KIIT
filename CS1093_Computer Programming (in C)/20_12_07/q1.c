/* Q1: Implement loop using goto statement, and print the pattern 10 7 4 1. */

#include<stdio.h>
int main()
{
    int n=10;

    l1:     // goto label
    printf("%d\t", n);
    n=n-3;  
    if(n>=1)
        goto l1;

    return 0;
}