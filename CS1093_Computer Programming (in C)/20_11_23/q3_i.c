/* Q3 (i): Consider an even size array {1,2,3,4,5,6}. Then display the array values in pattern: 3 4 2 5 1 6  */

#include<stdio.h>
int main()
{
    // initialize array
    int x[6]={5,9,6,3,1,4}, i,j;

    // display array
    printf("Array : ");

    for(i=0; i<6; i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");

    // display the array values in the given pattern
    printf("Array : ");

    for(i=2, j=3; i>=0 && j<6; i--, j++)
    {
        printf("%d\t", x[i]);
        printf("%d\t", x[j]);
    }

    printf("\n\n");

    return 0;
}