/* Q9: Print the pattern:
       1
       2    3
       4    5   6
*/

#include<stdio.h>
int main()
{
    // variable declaration and initialization
    int i,j,n=1, r;

    // input no. of rows to print
    printf("Enter no. of rows.\t");
    scanf("%d", &r);

    // print the pattern
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d\t", n);
            n++;
        }

        printf("\n");
    }

    return 0;
}