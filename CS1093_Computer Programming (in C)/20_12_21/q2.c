/* Q2: Write a function using call by reference to interchange the two values. */

#include<stdio.h>

// function to interchange two values
// a and b are pointers to the two values to be interchanged
void swap(int *a, int *b)
{
    int t;  // t is a temporary variable
    t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int x=5,y=3;
    printf("Initial values:\t%d\t%d\n",x,y);
    swap(&x,&y);    // call function to interchange x and y
    printf("Final values:\t%d\t%d\n",x,y);

    return 0;
}