/* Q1: Write a recursive function for finding factorial. */

#include<stdio.h>

// recursive function for finding factorial of n
int fact(int n)
{
    int p;
    if(n<0) // factorial of negative number is not defined
        return -1;
    else if(n<=1)   // factorial of 0 and 1 is 1
        return 1;
    else
        return p=n*fact(n-1);   // recursive call
}

int main()
{
    int a;
    printf("Enter the number:\t");
    scanf("%d",&a);
    
    if(a<0)
        printf("\nFactorial of negative number is not defined.\n");
    else
        printf("\nFactorial of %d = %d\n", a, fact(a));
    return 0;
}