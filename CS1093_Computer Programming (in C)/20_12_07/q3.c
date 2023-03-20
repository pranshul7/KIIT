/* Q3: Display digits of a number using goto. */

#include<stdio.h>
int main()
{
    int n,tn;
    printf("Enter the number :\t");
    scanf("%d", &n);    // input number

    tn=n;   // temporary variable to store the number
    printf("Digits : \t");
    l1:     // goto label
    // body --
    printf("%d ", n%10);
    n/=10;
    // -- of the loop
    if(n>0)     // stopping condition
        goto l1;

    return 0;
}