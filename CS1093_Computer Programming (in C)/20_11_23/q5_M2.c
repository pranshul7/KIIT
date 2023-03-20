/* Q5: Consider an even size array {3,5,8,2,5,9}. Swap the two values in a pair of successive values in the array 
if the first value is less than the second value, such that the new array becomes: {5,3,8,2,9,5}. */

// Method 2

#include<stdio.h>
int main()
{
    // initialize array
    int x[6]={5,9,6,3,1,4}, c,i,j;

    // display original array
    printf("Array : ");

    for(i=0; i<6; i++)
    {
        printf("%d\t", x[i]);
    }

    // swap the values of the array in the given pattern
    for(i=0; i<6; i+=2)
    {
        if(x[i]<x[i+1])
        {
        c=x[i];
        x[i]=x[i+1];
        x[i+1]=c;
        }
    }

    printf("\n\n");

    // display new array
    printf("Array : ");

    for(i=0; i<6; i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");

    return 0;
}