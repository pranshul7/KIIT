/* Que 4: Find all the prime numbers from 100 to 2000. */

#include<stdio.h>
int main()
{
    // variable declaration and initialization
    int n=100;

    // find prime numbers
    while(n>=100 && n<=2000)
    {
        int c=2;
        while(c<n)
        {
            if((n%c)==0)
                break;

            c++;
        }

        if(c==n)
            printf("%d\t", n);

        n++;
    }

    return 0;
}