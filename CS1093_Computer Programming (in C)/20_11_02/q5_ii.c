/* Que 5 (ii): Take a no. and display all its digits. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n, d;

    // input number
    printf("Enter the number\n");
    scanf("%d", &n);

    // count no. of digits in the number
    int c=1, n1=n;
    while(1)
    {
        n1=n1/10;

        if (n1==0)
            break;

        c++;
    }

    // display no. of digits in the number
    printf("\nNumber of digits in the number = %d\n\n", c);

    // display all digits of the number
    int i=1;
    while(i<=c)
    {
        d=n%10;
        printf("%d\n", d);

        n=n/10;

        i++;
    }

    return 0;
}