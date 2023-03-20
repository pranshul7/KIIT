/* Q1 (i): Reverse two halves of an even size array. */

#include<stdio.h>
int main()
{  
    // initialize array
    int x[8]={4,2,6,5,1,0,3,9}, i,j,c;

    // print original array
    printf("Array : ");

    for(i=0; i<8; i++)
    {
        printf("%d\t", x[i]);
    }


    printf("\n\n");

    // reverse first half
    for(i=0,j=3; i<j; i++,j--)
    {
        c=x[i];
        x[i]=x[j];
        x[j]=c;
    }

    // reverse second half
    for(i=4,j=7; i<j; i++,j--)
    {
        c=x[i];
        x[i]=x[j];
        x[j]=c;
    }

    // print new array
    printf("Array : ");

    for(i=0; i<8; i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");

    return 0;
}