/* Q1(ii): Display the sequence 19 16 13 10 ... upto user specified no. of values.  */

#include<stdio.h>
int main()
{
    // variable declaration
    int sa,i;

    // input size of array
    printf("Enter size of array:\t");
    scanf("%d", &sa);

    int a[sa];  // array declaration
    a[sa-1]=1;  // first element of array

    // fill array with sequence
    for(i=sa-2; i>=0; i--)
    {
        a[i]=a[i+1]+3;
    }

    // display sequence
    printf("\nArray:\n\n");
    for(i=0; i<sa; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n\n");

    return 0;
}