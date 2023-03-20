/* Q2(i): Write a recursive function for displaying 1,2,3........upto n. */

#include<stdio.h>

// recursive function for displaying 1,2,3........upto n
void f(int n)
{
    if(n>1)
        f(n-1);
    printf("%d ",n);
}

int main()
{
    int a;
    printf("Enter the number:\t");
    scanf("%d",&a);
    f(a);   // call recursive function to display 1,2,3........upto a
    return 0;
}