/* Q5: Define a function to find first two digits after decimal in a real number.  */

#include<stdio.h>

// function to find first two digits after decimal in a real number
int f(float n)
{
    int t1n=n;  // t1n is the integer part of n
    float fn1=n-t1n;   // fn1 is the fractional part of n
    int t2n=fn1*100;    // t2n is the first two digits after decimal in n
    return t2n;
}

// main function
int main()
{
    float n;
    printf("Enter the real value:\t");
    scanf("%f",&n); // input the real number
    printf("\nThe two digits after decimal = %d\n",f(n));  // call function f with n as argument to find first two digits after decimal in n
    return 0;
}