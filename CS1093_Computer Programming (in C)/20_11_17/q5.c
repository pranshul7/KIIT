/* Q5: Print the pattern:
       1
       12
       123
       1234
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
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}