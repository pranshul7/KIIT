/*Que 9: Find the no. is prime or not. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n,c;

    // input number
    printf("Enter the number.\t");
    scanf("%d", &n);

    // check if the number is prime
    if(n==1)    // special case for 1
    {
        printf("\n1 is neither prime nor composite.\n");
    }
    else    // for all other numbers
    {
    for(c=2;c<n;c++)
    {
        if(n%c==0)
        {
            printf("\nThe number is not a prime number.\n");
            break;
        }
    }

    if(c==n)
        printf("\nThe number is a prime number.\n");
    }

    return 0;
}