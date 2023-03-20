/* Q4: Point a pointer to an array. Take array index as input from user.
       Then display array elements from the user input index upto the end of array using pointer. */

#include<stdio.h>
int main()
{
    // declare and initialize array
    int a[8]={4,7,5,9,1,2,0,3},n,*pa=a,i;   // pa is a pointer to array a

    printf("Enter the index(less than 8):\t");
    scanf("%d",&n); // input index

    // display array elements from index n to end of array
    for(i=n; i<8; i++)
        printf("%d\t",pa[i]);

    return 0;
}