/* Q4: Write a recursive function to display nth fibonacci number. */

#include<stdio.h>

// recursive function to find the nth fibonacci number
int f(int n)
{
    if(n==1)    // first fibonacci number is 0
        return 0;
    else if(n==2)   // second fibonacci number is 1
        return 1;
    else
        return f(n-1)+f(n-2);   // recursive call to find the nth fibonacci number where n>2
}

int main()
{
    int a;
    printf("Enter the number:\t");
    scanf("%d",&a);
    printf("\n%d th Fibonacci term = %d\n",a,f(a));  // call recursive function to find the nth fibonacci number
    return 0;
}