/* Q3(ii): Write a recursive function to display digits of a number in reverse manner. */

#include<stdio.h>

// recursive function to display digits of the number n in reverse manner
void f(int n)
{
    printf("%d ",n%10);
    if((n/10)>0)
        f(n/10);
}

int main()
{
    int a;
    printf("Enter the number:\t");
    scanf("%d",&a);
    f(a);   // call the recursive function to display digits of the number a in reverse manner
    return 0;
}