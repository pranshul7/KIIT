/* Que 9: Take a number and determine if it is prime or not. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n;

    // input number
    printf("Enter the number you want to check for prime\n");
    scanf("%d", &n);

    // logic
    if(n==1)
        printf("\n1 is neither prime nor composite number\n");
    else if (n<=0)
        printf("\nEnter valid number\n");
    else
    {
        int i=2;
        while(i<n)
        {
            if((n%i)==0)
            {
                printf("\nThe given number is not a prime number\n");
                break;
            }

            i++;
        }

        if(i==n)
            printf("\nThe given number is a prime number\n");
    }

    return 0;
}