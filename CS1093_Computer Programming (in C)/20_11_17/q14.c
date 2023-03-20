/* Q14: Print the pattern:
     *
     **
     * *
     *  *
     *   *
     ******
*/

#include<stdio.h>
int main()
{
    // input no. of rows to print
    int n,i,j;
    printf("Enter the no. of rows.\t");
    scanf("%d", &n);

    // print the pattern
    for(i=1; i<=n; i++)
    {
        if(i==1 || i==n)
        {
        for(j=1; j<=i; j++)
            printf("*");
        }
        else
        {
            printf("*");
            for(j=1; j<=(i-2); j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }

    return 0;
}