/* Q1 (ii): Reverse two halves of an odd size array, and do not change the middle element.  */

#include<stdio.h>
int main()
{
    // initialize array
    int x[7]={4,2,6,5,1,3,9}, i,j,c;

    // print original array
    printf("Array : ");

    for(i=0; i<7; i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");

    // reverse first half
    for(i=0,j=2; i<j; i++,j--)
    {
        c=x[i];
        x[i]=x[j];
        x[j]=c;
    }

    // reverse second half
    for(i=4,j=6; i<j; i++,j--)
    {
        c=x[i];
        x[i]=x[j];
        x[j]=c;
    }

    // print new array
    printf("Array : ");

    for(i=0; i<7; i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");

    return 0;
}