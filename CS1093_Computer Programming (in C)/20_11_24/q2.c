/* Q2: Create a 2-D array, take user inputs and then display the array.  */

#include<stdio.h>
int main()
{
    // declare array and variables
    int x[3][4], i,j;

    // take array inputs
    printf("Enter the values for matrix\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            scanf("%d", &x[i][j]);
    }

    printf("\n\n");

    // display array
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            printf("%d\t", x[i][j]);

        printf("\n");
    }

    printf("\n\n");

    return 0;
}