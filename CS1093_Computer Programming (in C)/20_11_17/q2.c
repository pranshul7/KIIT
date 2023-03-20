/* Q2: Print the pattern:
    ****
    ***
    **
    *
*/

#include<stdio.h>
int main()
{
    // input no. of rows to print
    int n;
    printf("Enter the no. of rows.\t");
    scanf("%d", &n);

    // print the pattern
    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}