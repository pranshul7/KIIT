/* Que 2: Take two numbers and display all numbers between them including them. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n1,n2;

    // input 2 numbers
    printf("Enter the two numbers\n");
    scanf("%d%d", &n1, &n2);

    // display numbers between them
    if(n1<n2)
    {
        while(n1<=n2)
        {
            printf("%d\n", n1);
            n1++;
        }
    }
    else
    {
        while(n1>=n2)
        {
            printf("%d\n", n1);
            n1--;
        }
    }

    return 0;
}