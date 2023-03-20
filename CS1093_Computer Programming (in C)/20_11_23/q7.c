/* Q7:  Find minimum and maximum in the array. */

#include<stdio.h>
int main()
{
    // initialise the array, max and min
    int x[6]={5,9,6,3,1,4},max=x[1],min=x[1], i;

    // display the array
    printf("Array : ");

    for(i=0; i<6; i++)
    {
        printf("%d\t", x[i]);
    }

    // find maximum and minimum
    for(i=0; i<6; i++)
    {
        if(x[i]>max)
            max=x[i];

        if(x[i]<min)
            min=x[i];
    }

    // display maximum and minimum
    printf("\n\nMaximum = %d", max);
    printf("\n\nMinimum = %d", min);


    printf("\n\n");

    return 0;
}