/* Q5: Display reverse array using pointers. */

#include<stdio.h>
int main()
{
    // declare and initialize array
    int a[8]={4,7,5,9,1,2,0,3},*pa=a,i;  // pa is a pointer to array a

    // display original array
    printf("Original array:\n");
    for(i=0; i<8; i++)
        printf("%d\t",pa[i]);

    // display reverse array
    printf("\n\nReverse array:\n");
    for(i=7; i>=0; i--)
        printf("%d\t",pa[i]);

    return 0;
}