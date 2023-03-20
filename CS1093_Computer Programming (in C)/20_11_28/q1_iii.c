/* Q1(iii): Display the pattern [1 4 7 1 4 7] for an even size array.  */

#include<stdio.h>
int main()
{
    // variable declaration
    int sa,i;

    // input size of array
    printf("Enter even size of array:\t");
    scanf("%d", &sa);

    int a[sa];  // array declaration
    a[0]=a[sa/2]=1;   // first element of first-half and second-half of array

    // fill array with sequence
    for(i=1; i<(sa/2); i++)
    {
        a[i]=a[(sa/2)+i]=a[i-1]+3;
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