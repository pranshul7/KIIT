/* Q7:  Check whether the matrix is magic matrix or not. */

#include<stdio.h>
int main()
{
    // declare a 2D matrix
    int x[3][3], i,j;
    // declare variables to store sum of rows, columns and diagonals
    int sr1=0,sr2=0,sr3=0,sc1=0,sc2=0,sc3=0,sd1=0,sd2=0;

    // take matrix inputs
    printf("Enter the values for matrix\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &x[i][j]);
    }

    // display matrix
    printf("\n\nMatrix :\n\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t", x[i][j]);

        printf("\n");
    }

    // calculate sum of rows
    for(j=0; j<3; j++)
        sr1=sr1+x[0][j];
    for(j=0; j<3; j++)
        sr2=sr2+x[1][j];
    for(j=0; j<3; j++)
        sr3=sr3+x[2][j];

    // calculate sum of columns
    for(i=0; i<3; i++)
        sc1=sc1+x[i][0];
    for(i=0; i<3; i++)
        sc2=sc2+x[i][1];
    for(i=0; i<3; i++)
        sc3=sc3+x[i][2];

    // calculate sum of diagonals
    for(i=0,j=0; i<3 && j<3; i++,j++)
        sd1=sd1+x[i][j];
    for(i=0,j=2; i<3 && j>=0; i++,j--)
        sd2=sd2+x[i][j];


    printf("\n\n");

    // display sum of rows
    printf("Sum of first row : %d\n", sr1);
    printf("Sum of second row : %d\n", sr2);
    printf("Sum of third row : %d\n", sr3);

    // display sum of columns
    printf("Sum of first column : %d\n", sc1);
    printf("Sum of second column : %d\n", sc2);
    printf("Sum of third column : %d\n", sc3);

    // display sum of diagonals
    printf("Sum of left up to right bottom diagonal : %d\n", sd1);
    printf("Sum of right up to left bottom diagonal : %d\n", sd2);

    // display if the matrix is magic matrix or not
    if(sr1==sr2 && sr2==sr3 && sr3==sc1 && sc1==sc2 && sc2==sc3 && sc3==sd1 && sd1==sd2)
        printf("\n\nThis is a magic matrix.\n\n");
    else
        printf("\n\nThis is not a magic matrix.\n\n");

    return 0;
}