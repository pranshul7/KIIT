/* Que 7: Take a number and check whether it is equal to its reverse or not. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n, rn=0;

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

    printf("\nNumber of digits in the number = %d\n", c);

    // reverse the number
    int n2=n, i=1, d, p10;
    while(i<=c)
    {
        p10=1;

        d=n2%10;

        int j=1;
        while(j<=(c-i))
        {
            p10=p10*10;
            j++;
        }

        rn=rn+(d*p10);

        n2=n2/10;
        i++;
    }

    printf("\nReversed number = %d\n", rn);

    // display if the number is equal to its reverse or not
    if (n==rn)
        printf("\nThe numbers are equal\n");
    else
        printf("\nThe numbers are not equal\n");

    return 0;
}