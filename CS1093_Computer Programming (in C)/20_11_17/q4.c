/* Q4: Print the pattern:
        1
        11
        111
        1111
*/

#include<stdio.h>
int main()
{   
    // input no. of rows to print
    int n;
    printf("Enter the no. of rows.\t");
    scanf("%d", &n);

    int i,j;

    // print the pattern
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("1");
        }

        printf("\n");
    }

    return 0;
}
