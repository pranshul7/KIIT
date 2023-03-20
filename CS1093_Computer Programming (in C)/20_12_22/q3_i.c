/* Q3(i): Write a recursive function to display digits of a number in forward manner. */

#include<stdio.h>

// recursive function to display digits of the number n in forward manner
void f(int n)
{
    if((n/10)>0)
        f(n/10);
    printf("%d ",n%10);
}

int main()
{
    int a;
    printf("Enter the number:\t");
    scanf("%d",&a);
    f(a);   // call the recursive function to display digits of the number a in forward manner
    return 0;
}