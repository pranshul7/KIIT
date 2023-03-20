/* Q6:  Reverse the array. */
/* Method 2 */

#include<stdio.h>
int main()
{
    // initialise the array
    int x[6]={5,9,6,3,1,4}, c,i,j;

    // print the original array
    printf("Array : ");

    for(i=0; i<6; i++)
    {
        printf("%d\t", x[i]);
    }

    // reverse the array
    for(i=0,j=5; i<j; i++,j--)
    {
        c=x[i];
        x[i]=x[j];
        x[j]=c;
    }

    printf("\n\n");

    // print the reversed array
    printf("Array : ");

    for(i=0; i<6; i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");

    return 0;
}