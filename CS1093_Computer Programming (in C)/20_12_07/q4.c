/* Q4: Display the array in reverse order using goto. */

#include<stdio.h>
int main()
{
    int a[5]={3,7,0,9,2}, i;

    printf("Reverse array : \t");
    i=4;    // initialize counter
    l1:     // goto label
    // body --
    printf("%d ", a[i--]);
    // -- of the loop
    if(i>=0)    // stopping condition
        goto l1;

    return 0;
}