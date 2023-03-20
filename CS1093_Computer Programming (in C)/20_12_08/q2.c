/* Q2: Add 3 integers using pointers and display sum. */

#include<stdio.h>
int main()
{
    // declare and initialize variables
    int n1=1,n2=2,n3=7, *pn1=&n1,*pn2=&n2,*pn3=&n3, sum;

    sum=*pn1+*pn2+*pn3; // calculate sum

    printf("Sum=%d\n",sum); // display sum

    return 0;
}