/* Q4: Display diagonal of the matrix.  */

#include<stdio.h>
int main()
{
    // define matrix
    int x[4][4]={ {2,4,3,8},{4,2,0,1},{5,1,2,8},{8,6,2,0} };
    int i,j;

    // display original matrix
    printf("Matrix :\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            printf("%d\t", x[i][j]);

        printf("\n");
    }

    // display diagonal of matrix
    printf("\nDiagonal :\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(i==j)
                printf("%d\t", x[i][j]);
            else
                printf(" \t", x[i][j]);
        }

        printf("\n");
    }

    return 0;
}