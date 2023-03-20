/*Que 8: Find reverse of the number. */

#include<stdio.h>
int main()
{
    // variable declaration and initialization
    int n,r=0;

    // input number
    printf("Enter the number.\t");
    scanf("%d", &n);

    // calculate reverse
    for(int t=n;t>0;t/=10)
    {
        r=(r*10)+(t%10);

    }

    // display output
    printf("\nReverse = %d\n",r);

    return 0;
}