/* Q2(ii): Write a recursive function for displaying n,n-1,n-2.......upto 1. */

#include<stdio.h>

// recursive function for displaying n,n-1,n-2.......upto 1
void f(int n)
{
    printf("%d ",n);
    if(n>1)
        f(n-1);
}

int main()
{
    int a;
    printf("Enter the number:\t");
    scanf("%d",&a);
    f(a);   // call recursive function to display n,n-1,n-2.......upto 1
    return 0;
}