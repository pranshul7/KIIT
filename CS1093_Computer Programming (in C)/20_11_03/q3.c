/* Que 3: Find all the numbers from 100 to 2000 which are equal to their reverse. */

#include<stdio.h>
int main()
{
    // variable declaration and initialization
    int n=100, tn, d, r;

    // find numbers
    while(n>=100 && n<=2000)
    {
        tn=n;
        r=0;
        while(tn>0)
        {
            d=tn%10;
            r=(r*10)+d;
            tn=tn/10;
        }

        if(r==n)
            printf("%d\t", r);

        n++;
    }

    return 0;
}