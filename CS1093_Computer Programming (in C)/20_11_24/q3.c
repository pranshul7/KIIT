/* Q3:  Display sum of each row,and sum of each column of a 2-D matrix.*/

#include<stdio.h>
int main()
{
    // initialise a 2D array
    int x[3][4]={ {2,4,3,8},{4,2,0,1},{5,1,2,8} };
    // declare variables for sum of rows and columns
    int sr1=0,sr2=0,sr3=0,sc1=0,sc2=0,sc3=0,sc4=0, i,j;

    // display array
    printf("Matrix :\n\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            printf("%d\t", x[i][j]);

        printf("\n");
    }

    // calculate sum of rows
    for(j=0; j<4; j++)
        sr1=sr1+x[0][j];
    for(j=0; j<4; j++)
        sr2=sr2+x[1][j];
    for(j=0; j<4; j++)
        sr3=sr3+x[2][j];

    // calculate sum of columns
    for(i=0; i<3; i++)
        sc1=sc1+x[i][0];
    for(i=0; i<3; i++)
        sc2=sc2+x[i][1];
    for(i=0; i<3; i++)
        sc3=sc3+x[i][2];
    for(i=0; i<3; i++)
        sc4=sc4+x[i][3];

    printf("\n\n");

    // display sum of rows
    printf("Sum of first row : %d\n", sr1);
    printf("Sum of second row : %d\n", sr2);
    printf("Sum of third row : %d\n", sr3);

    // display sum of columns
    printf("Sum of first column : %d\n", sc1);
    printf("Sum of second column : %d\n", sc2);
    printf("Sum of third column : %d\n", sc3);
    printf("Sum of fourth column : %d\n", sc4);

    return 0;
}