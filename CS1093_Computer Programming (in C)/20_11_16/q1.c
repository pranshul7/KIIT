/*Que 1: Display 1 to 20 and 20 to 1. */

#include<stdio.h>
int main()
{
    // variable declaration
    int i;

    // display 1 to 20
    for(i=1; i<=20; i++)
    {
        printf("%d\t", i);
    }

    printf("\n\n");

    // display 20 to 1
    for(; i>=2;)
    {
        printf("%d\t", --i);
    }

    printf("\n");

    return 0;
}