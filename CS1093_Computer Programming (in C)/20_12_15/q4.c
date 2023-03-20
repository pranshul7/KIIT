/* Q4: Define a function to check whether a number is prime or not. */

#include<stdio.h>

// function to check whether a number is prime or not
int prime(int n)    // n is the function parameter for the number to be checked
{
    int i,rvalue;
    if(n==1)    // 1 is neither prime nor composite
        printf("The number is neither prime nor composite.\n");
    else
    {
        // check if n is divisible by any number other than 1 and itself
        for(i=2;i<n;i++)    
            if(n%i==0)
            {
                rvalue=0;   // if n is not prime, rvalue is set to 0
                break;
            }
        if(i==n)
            rvalue=1;   // if n is prime, rvalue is set to 1
    }

    return rvalue;
}

// main function
int main()
{
    int n,rvalue;
    printf("Enter the number:\t");
    scanf("%d", &n);    // input the number to be checked

    rvalue=prime(n);    // call function prime with n as argument to check if n is prime or not
    if(rvalue==0)
        printf("\nNot a prime number.\n");
    else if(rvalue==1)
        printf("\nA prime number.\n");

    return 0;
}