/* Q2: Define a function to print the following pattern:
       ****
       ***
       **
       *
*/

#include<stdio.h>

// function to print the pattern
void pattern(int n) // n is the function parameter for the number of rows of the pattern to be printed
{
    int i,j; // i is counter for rows and j is counter for columns
    for(i=n; i>0; i--)
    {
        for(j=i; j>0; j--)
            printf("*");
            printf("\n");
    }
}

// main function
int main()
{
    int n;
    printf("Enter no. of rows:\t");
    scanf("%d",&n); // input the number of rows of the pattern to be printed
    pattern(n); // call function pattern with n as argument to print the pattern
    return 0;
}