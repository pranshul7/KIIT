/* Q2(iv): Display a 2D matrix in the pattern
            1  6  7
            2  5  8
            3  4  9
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
    for(j=0; j<nca; j++)
    {
        if(j%2==0)
        {
            n=(j*nra)+1;
            for(i=0; i<nra; i++)
                a[i][j]=n++;
        }
        else
        {
            n=(j+1)*nra;
            for(i=0; i<nra; i++)
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