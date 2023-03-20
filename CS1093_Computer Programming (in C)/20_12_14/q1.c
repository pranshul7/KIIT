/* Q1: Find maximum value in an integer array using pointers.*/

#include<stdio.h>
int main()
{
    // initialize array and declare variables
    int a[10]={5,8,3,4,1,9,0,6}, max=0,i;
    int *p=a; // p is a pointer to array a

    // display array
    printf("Array:\n");
    for(i=0; i<10; i++)
        printf("%d ",p[i]);

    // find maximum value
    for(i=0; i<10; i++)
        if(p[i]>max)
            max=p[i];

    printf("\n\nMaximum value = %d\n",max); // display maximum value

    return 0;
}