/* Que 5 (i): Take a number and find its number of digits. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n;

    // input number
    printf("Enter the number\n");
    scanf("%d", &n);

    // logic
    int c=1;
    while(1)
    {
        n=n/10;

        if (n==0)
            break;

        c++;
    }

    // display output
    printf("\nNumber of digits in the number = %d\n", c);

    return 0;
}