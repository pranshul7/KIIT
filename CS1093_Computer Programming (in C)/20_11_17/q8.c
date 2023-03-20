/* Q8: Print the pattern:
       10   9   8   7
       6    5   4
       3    2
       1
*/

#include<stdio.h>
int main()
{   
    // variable declaration
    int i,j,n,r;

    // input no. of rows to print
    printf("Enter no. of rows.\t");
    scanf("%d", &r);

    // calculate the starting value of the pattern
    n=(r*(r+1))/2;

    // print the pattern
    for(i=r; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d\t", n);
            n--;
        }

        printf("\n");
    }

    return 0;
}