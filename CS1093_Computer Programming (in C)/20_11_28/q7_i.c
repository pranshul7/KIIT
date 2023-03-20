/* Q7(i): Display at which indexes a user input number is present in a 2D array.  */

#include<stdio.h>
int main()
{
    // variable declaration and array initialization
    int a[4][4]={{5,3,7,5},{9,1,2,4},{8,1,3,7},{4,6,8,2}}, n,i,j,c1=1,c2=0;

    // input number to check
    printf("Enter the number:\t");
    scanf("%d", &n);

    // check at which indexes the number is present
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(a[i][j]==n)
            {
                c2++;
                for(; c1==1; c1++)
                    printf("\n\nThe number is present in the following indexes :\n\n");

                printf("(%d,%d)\n", i,j);
            }
        }
    }

    // if the number is not present in the array
    if(c2==0)
        printf("\n\nThe number is not present in the array.\n\n");

    return 0;
}