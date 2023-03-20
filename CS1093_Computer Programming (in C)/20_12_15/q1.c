/* Q1: Define a function to find max amond 2 numbers.  */

#include<stdio.h>

// function to find max among 2 numbers
int max2(int n1,int n2) // n1 and n2 are function parameters for two numbers of which max is to be found
{
    int max=(n1>n2)?n1:n2;
    return max;
}

// main function
int main()
{
    int n1,n2;
    printf("Enter the two integers:\t");
    scanf("%d%d",&n1,&n2);  // input 2 integers
    printf("\nMaximum value = %d\n",max2(n1,n2));   // call function max2 with n1 and n2 as arguments

    return 0;
}