/* Q6: Define an array, for example {1,2,3,4,5,6}.
       Point a pointer to the array.
       Then display the array elements using the pointer in the pattern 14 25 36.   */

#include<stdio.h>
int main()
{
    // declare and initialize array
    int a[8]={4,7,5,9,1,2,0,3},*q=a,i; // q is a pointer to array a

    // display original array
    printf("Original array:\n");
    for(i=0; i<8; i++)
        printf("%d ",q[i]);

    // display array elements in the given pattern
    printf("\n\nRequired Output:\t");
    for(i=0; i<4; i++)
        printf("%d%d ",q[i],q[i+4]);
    printf("\n\n");

    return 0;
}