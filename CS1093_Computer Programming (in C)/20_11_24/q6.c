/* Q6:  Display values stored in the matix boxes adjacent to the box specified by the user. */

#include<stdio.h>
int main()
{
    // define matrix
    int x[4][5]={ {2,4,3,8,2},{4,3,2,0,1},{5,6,1,2,8},{8,6,6,2,0} };
    int i,j,r,c;

    // take user input for the box of which adjacent elements to be displayed
    printf("Enter row no.\t");
    scanf("%d", &r);
    printf("Enter column no.\t");
    scanf("%d", &c);

    // display original matrix
    printf("\n\nMatrix :\n\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
            printf("%d\t", x[i][j]);

        printf("\n");
    }

    // display adjacent values of matrix
    printf("\n\nAdjacent values :\n\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            if(i>=r-2 && i<=r && j>=c-2 && j<=c && (i!=(r-1) || j!=(c-1)))
                printf("%d\t", x[i][j]);
            else
                printf(" \t", x[i][j]);
        }

        printf("\n");
    }

    printf("\n\n");

    return 0;
}