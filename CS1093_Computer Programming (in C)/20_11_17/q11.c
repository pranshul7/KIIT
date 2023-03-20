/* Q11: Print the pattern:
               1
              1 1
             1 1 1
            1 1 1 1
*/

#include<stdio.h>
int main()
{
    // input no. of rows to print
    int n;
    printf("Enter the no. of rows.\t");
    scanf("%d", &n);

    int i,j;

    // print the pattern
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n-i); j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("1 ");
        }

        printf("\n");
    }

    return 0;
}