/* Q3: Write a function to find gcd of two numbers. */

#include<stdio.h>

// function to find gcd of two numbers n1 and n2
int gcd2(int n1, int n2)
{
    int r;
    while((n1%n2)!=0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    return n2;
}

int main()
{
    int x=14,y=6;
    printf("gcd = %d\n",gcd2(x,y));  // call function to find gcd of x and y
    return 0;
}