/* Que 6: Find middle digit/number of any integer number. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n, n1, m, p10e=1, p10o=1;

    // input number
    printf("Enter the number\n");
    scanf("%d", &n);

    n1=n;

    // calculate number of digits
    int c=1;
    while(1)
    {
        n1=n1/10;

        if (n1==0)
            break;

        c++;
    }
    printf("\nNumber of digits in the number = %d\n", c);

    // find middle digit
    if((c%2)==0)
    {
        int i=1;
        while(i<=((c/2)-1))
        {
            p10e=p10e*10;
            i++;
        }

        m=(n/p10e)%100;
    }
    else
    {
        int j=1;
        while(j<=((c-1)/2))
        {
            p10o=p10o*10;
            j++;
        }

        m=(n/p10o)%10;
    }

    // display output
    printf("\nMiddle digit = %d\n",m);
    return 0;
}