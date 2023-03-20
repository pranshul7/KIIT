/* Q2: Implement loop using goto and print the pattern 1 2 4 7 10. */

#include<stdio.h>
int main()
{
    int n=1,c=0;

    l1:     // goto label
    printf("%d\t", n);
    c+=1;   // increase the difference b/w successive numbers by one
    n=n+c;  // updated number
    if(n<=100)  // stopping condition
        goto l1;

    return 0;
}