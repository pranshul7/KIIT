/* Q5: Find gcd of an array. */

#include<stdio.h>

// function to find gcd of an array
int gcd(int *b, int size)
{
    // function to find gcd of two numbers n1 and n2
    int gcd2(int n1, int n2)
    {
        int r;
        while((n1%n2)!=0)
        {
            r=n1%n2;
            n1=n2;
            n2=r;
        }
        return n2;
    }

    int g = gcd2(b[0],b[1]);  // gcd of first two elements of array
    for(int i=2; i<size && (g != 1); i++) // update gcd of array till either gcd of subarray is 1 or all elements are processed
        g = gcd2(g,b[i]);   // update gcd of array with gcd of current element and gcd of subarray before current element

    return g;
}

int main()
{
    int a[5]={4,14,6,20,28};
    printf("gcd = %d\n",gcd(a,5));  // call function to find gcd of array a
    return 0;
}