/* Q1(ii): Write a function for displaying an array. */

#include<stdio.h>

// function to display an array
// b is a pointer to the array to be displayed, size is the size of the array
void display(int *b, int size)
{
    int i;
    printf("Array:\n");
    for(i=0; i<size; i++)
        printf("%d\t",b[i]);
        printf("\n");
}

int main()
{
    int a[5]={4,7,0,6,2};
    display(a,5);   // call function to display array a
    return 0;
}