/* Q3: Create an odd size 2D matrix in the following pattern, given the size of matrix by user:
       1  2  3
       4  5  6
       7  8  9
       Display parts of matrix as per the choice given by user as follows:
       
       If, choice = 0 -> display    1  2  3
                                       5
       If, choice = 1 -> display          3
                                       5  6
                                          9
       If, choice = 2 -> display       5 
                                    7  8  9
       If, choice = 3 -> display    1
                                    4  5
                                    7

*/

#include<stdio.h>
int main()
{
    // variable declaration
    int sa,n=1,i,j,t;

    // input odd size of 2D matrix
    printf("Enter the odd no. of rows/columns for a square 2D array:\t");
    scanf("%d", &sa);

    int a[sa][sa];  // declare 2D matrix

    // fill 2D matrix
    for(i=0; i<sa; i++)
        for(j=0; j<sa; j++)
            a[i][j]=n++;

    // input user choice
    printf("\n\n0/1/2/3 ???\t");
    scanf("%d", &t);

    printf("\n\n");

    // display part of 2D matrix as per user choice
    if(t==0)    // if choice = 0
    {
        for(i=0; i<=sa/2; i++)
        {
            for(j=0; j<sa; j++)
            {
                if(j>=i && j<=(sa-1)-i)
                    printf("%d\t", a[i][j]);
                else
                    printf(" \t");
            }

            printf("\n");
        }
    }
    else if(t==1)   // if choice = 1
    {
        for(i=0; i<sa; i++)
        {
            for(j=sa/2; j<sa; j++)
            {
                if(i>=(sa-1)-j && i<=j)
                    printf("%d\t", a[i][j]);
                else
                    printf(" \t");
            }
            printf("\n");
        }
    }
    else if(t==2)   // if choice = 2
    {
        for(i=sa/2; i<sa; i++)
        {
            for(j=0; j<sa; j++)
            {
                if(j>=(sa-1)-i && j<=i)
                    printf("%d\t", a[i][j]);
                else
                    printf(" \t");
            }
            printf("\n");
        }
    }
    else if(t==3)  // if choice = 3
    {
        for(i=0; i<sa; i++)
        {
            for(j=0; j<=sa/2; j++)
            {
                if(i>=j && i<=(sa-1)-j)
                    printf("%d\t", a[i][j]);
                else
                    printf(" \t");
            }
            printf("\n");
        }
    }

    printf("\n\n");

    return 0;
}