/* Q3(ii): Consider an odd size array {1,2,3,4,5}. Then display the array values in pattern: 3 2 4 1 5   */

#include<stdio.h>
int main()
{
    // initialize array
    int x[5]={5,9,6,1,4}, i,j;

    // display original array
    printf("Array : ");

    for(i=0; i<5; i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");

    // display array values in the given pattern
    printf("Array : ");

    printf("%d\t", x[2]);

    for(i=1, j=3; i>=0 && j<5; i--, j++)
    {
        printf("%d\t", x[i]);
        printf("%d\t", x[j]);
    }

    printf("\n\n");

    return 0;
}