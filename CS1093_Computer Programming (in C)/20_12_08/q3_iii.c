/* Q3(iii): Point a pointer to an array then use pointer arithmetic to take input and display values of the array. */

#include<stdio.h>
int main()
{
    int a[3],i, *pa=a; // pa is a pointer to array a
    printf("Enter values:\n");

    // input values
    for(i=0; i<3; i++)
        scanf("%d", pa+i);  // (pa+i) is same as &pa[i] which is same as &a[i]
    printf("\n");

    // display values
    for(i=0; i<3; i++)
        printf("%d\t", *(pa+i));    // *(pa+i) is same as pa[i] which is same as a[i]
    printf("\n");

    return 0;
}