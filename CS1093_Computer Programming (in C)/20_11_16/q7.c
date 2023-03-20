/*Que 7: Compute m*n through addition process. */

#include<stdio.h>
int main()
{
    // variable declaration and initialization
    int m,n,r=0;

    // input m and n
    printf("Enter first value\t");
    scanf("%d", &m);
    printf("Enter second value\t");
    scanf("%d", &n);

    // calculate m*n
    for(;n>0;n--)
    {
        r=r+m;
    }

    // print the result
    printf("\nResult = %d\n",r);

    return 0;
}
