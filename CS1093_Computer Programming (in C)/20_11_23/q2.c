/* Q2: Initialize an array, then find sum of even values and product of odd values in the array. */

#include<stdio.h>
int main()
{
    // initialize array
    int x[7]={3,8,5,12,9,7,4}, se=0,po=1,i;

    // calculate sum of even values 
    for(i=0; i<7; i++)
    {
        if(x[i]%2==0)
            se=se+x[i];
    }

    // calculate product of odd values
    for(i=0; i<7; i++)
    {
        if(x[i]%2!=0)
            po=po*x[i];
    }

    // display original array
    printf("Array : ");

    for(i=0; i<7; i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");

    // display sum of even values and product of odd values
    printf("Sum of even values = %d\n", se);
    printf("\nProduct of odd values = %d\n", po);

    return 0;
}