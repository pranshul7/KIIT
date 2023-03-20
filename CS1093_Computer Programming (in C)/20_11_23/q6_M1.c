/* Q6:  Reverse the array. */
/* Method 1 */

#include<stdio.h>
int main()
{
    // initialise the array
    int x[6]={5,9,6,3,1,4}, c,i,j;

    // print the original array
    printf("Array :\t");

    for(i=0; i<6; i++)
    {
        printf("%d\t", x[i]);
    }

    // reverse the array
    for(i=2,j=3; i<6 && j<6; i--,j++)
    {
        c=x[i];
        x[i]=x[j];
        x[j]=c;
    }

    printf("\n\n");

    // print the reversed array
    printf("Array :\t");

    for(i=0; i<6; i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");

    return 0;
}