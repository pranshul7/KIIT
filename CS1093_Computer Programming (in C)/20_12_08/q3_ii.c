/* Q3(ii): Point a pointer to an array then take input and display values of the array using the pointer.  */

#include<stdio.h>
int main()
{
    int a[3],i, *pa=a; // pa is a pointer to array a
    printf("Enter values:\n");

    // input values
    for(i=0; i<3; i++)
        scanf("%d", &pa[i]); // &pa[i] is same as &a[i]
    printf("\n");

    // display values
    for(i=0; i<3; i++)
        printf("%d\t", pa[i]); // pa[i] is same as a[i]
    printf("\n");

    return 0;
}