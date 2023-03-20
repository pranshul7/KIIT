/* Q7: Print the pattern:
       1
       12
       111
       1234
       11111
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
        if(i%2!=0)
        {
            for(j=1; j<=i; j++)
            {
            printf("1");
            }
        }
        else
        {
            for(j=1; j<=i; j++)
            {
                printf("%d", j);
            }
        }

        printf("\n");
    }

    return 0;
}