/* Que 5: Display all even numbers whose square is within the range from 1000 to 6000. */

#include<stdio.h>
int main()
{
    // initialize even numbers from 0
    int n=0;

    // find even numbers within the range
    while((n*n)<=6000)
    {
        if((n%2)==0 && (n*n)>=1000)
            printf("%d\t", n);

        n++;
    }

    return 0;
}