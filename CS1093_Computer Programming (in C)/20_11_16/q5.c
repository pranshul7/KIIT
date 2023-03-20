/*Que 5: Convert the input no. in binary. */

#include<stdio.h>
int main()
{
    // variable declaration and initialization
    int n,p=1;

    // input decimal number
    printf("Enter the no.\t");
    scanf("%d", &n);

    // find the nearest power of 2
    for(;p<n;)
    {
        p=p*2;
    }

    printf("\nBinary: ");

    // print the binary number
    if(p>n)
        p=p/2;

    for(;p>0;)
    {
        if(n>=p)
            printf("1");
        else
            printf("0");

        n=n%p;
        p=p/2;
    }

    return 0;
}