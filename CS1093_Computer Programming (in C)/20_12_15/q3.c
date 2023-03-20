/* Q3: Define a function to calculate sum of all digits of an integer. */

#include<stdio.h>

// function to calculate sum of all digits of an integer
int sumd(int n) // n is the function parameter for the integer of which sum of digits is to be calculated
{
    int tn=n,sum=0;
    for(;tn>0;)
    {
        sum=sum+(tn%10);
        tn=tn/10;
    }
    return sum;
}

// main function
int main()
{
    int n;
    printf("Enter the integer number:\t");
    scanf("%d", &n);    // input the integer number
    printf("\nSum of it's digits = %d\n", sumd(n));  // call function sumd with n as argument to calculate sum of digits of n
    return 0;
}