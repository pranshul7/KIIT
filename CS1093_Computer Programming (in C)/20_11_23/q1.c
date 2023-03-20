/* Q1: Input an array of elements, then traverse forward and backward, and display the elements. */

#include<stdio.h>
int main()
{
    // define array
    int x[5],i;

    // input array
    for(i=0; i<5; i++)
    {
        scanf("%d", &x[i]);
    }

    // display array while traversing forward
    printf("\n\nForward :\t");

    for(i=0; i<5; i++)
    {
        printf("%d\t", x[i]);
    }

    // display array while traversing backward
    printf("\n\nBackward :\t");

    for(i=4; i>=0; i--)
    {
        printf("%d\t", x[i]);
    }

    printf("\n");

    return 0;
}