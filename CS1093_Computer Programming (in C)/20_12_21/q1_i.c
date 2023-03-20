/* Q1(i): Write a function for filling an array. */

#include<stdio.h>

// function to fill an array
// b[] is the array to be filled, size is the size of the array
void fill(int b[], int size)
{
    int i;
    for(i=0; i<size; i++)
        scanf("%d",&b[i]);
}

int main()
{
    int a[5],i;
    printf("Enter the elements of array:\n");
    fill(a,5);  // call function to take input for the array a

    // display array
    printf("\nArray:\n");
    for(i=0; i<5; i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}