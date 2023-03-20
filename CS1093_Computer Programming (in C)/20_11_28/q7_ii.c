/* Q7(ii): Display the frequency of the user input number in a 2D array.  */

#include<stdio.h>
int main()
{
    // variable declaration and array initialization
    int a[4][4]={{5,3,7,5},{9,1,2,4},{8,1,3,7},{4,6,8,2}}, n,i,j,c=0;

    // input number to check
    printf("Enter the number:\t");
    scanf("%d", &n);

    // count the frequency of the number
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            if(a[i][j]==n)
                c++;

    // display frequency
    printf("\n\nThe frequency of the number is :\t%d\n\n", c);

    return 0;
}