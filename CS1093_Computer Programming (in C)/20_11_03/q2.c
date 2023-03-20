/* Que 2: Find all the numbers from 200 to 3000 which are divisible by 3 & 8. */

#include<stdio.h>
int main()
{
    // variable declaration and initialization
    int c=0, n=200;

    // find numbers
    while(n>=200 && n<=3000)
    {
        if (((n%3)==0) && ((n%8)==0))
        {
            c++;
            printf("%d\t", n);
        }

        n++;
    }

    // display total numbers
    printf("\n\nThere are total %d numbers between 200 and 3000 which are divisible by 3 & 8 both.\n", c);

    return 0;
}