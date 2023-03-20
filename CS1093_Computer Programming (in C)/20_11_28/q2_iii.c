/* Q2(iii): Display a 2D matrix in the pattern
            1  2  3
            6  5  4
            7  8  9
            given no. of rows and columns by user.  */

#include<stdio.h>
int main()
{
    // variable declaration
    int nra,nca,i,j,n;

    printf("Enter no. of rows in array:\t");    // input no. of rows
    scanf("%d", &nra);
    printf("Enter no. of columns in array:\t"); // input no. of columns
    scanf("%d", &nca);

    int a[nra][nca];    // declare 2D matrix

    // fill 2D matrix
    for(i=0; i<nra; i++)
    {
        if(i%2==0)
        {
            n=(i*nca)+1;
            for(j=0; j<nca; j++)
                a[i][j]=n++;
        }
        else
        {
            n=(i+1)*nca;
            for(j=0; j<nca; j++)
                a[i][j]=n--;
        }
    }

    // display 2D matrix
    printf("\nArray:\n\n");
    for(i=0; i<nra; i++)
    {
        for(j=0; j<nca; j++)
            printf("%d\t", a[i][j]);

        printf("\n");
    }

    printf("\n\n");

    return 0;
}