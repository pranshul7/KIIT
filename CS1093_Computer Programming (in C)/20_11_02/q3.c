/* Que 3: Take two numbers and display the value of first number to the power of second number. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n1, n2, res=1;

    // input 2 numbers
    printf("Enter the two numbers\n");
    scanf("%d%d", &n1, &n2);

    // logic
    int i=1;
    while(i<=n2)
    {
        res=res*n1;
        i++;
    }

    // display output
    printf("\n%d^%d = %d\n", n1, n2, res);

    return 0;
}