/* Q8: Create and display a 2D matrix in the following pattern:
       0  1  0
       1  1  1
       0  1  0
*/

#include<stdio.h>
int main()
{
    // input order of the matrix
    int n;
    printf("Enter the order(odd) of the square matrix :\t");
    scanf("%d", &n);

    int a[n][n], i,j;   // declare 2D array and variables

    // fill the 2D matrix
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((j>=(n/2)-i && j<=n-1-((n/2)-i)) && (j>=i-(n/2) && j<=n-1-(i-(n/2))))
                printf("1\t");
            else
                printf("0\t");
        }

        printf("\n\n");

    }

    return 0;
}