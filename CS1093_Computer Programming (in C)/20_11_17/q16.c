/* Q16: Print the pattern:
             1
            1 1
           1 1 1
            1 1
             1  
*/

#include<stdio.h>
int main()
{
    // input no. of rows to print
    int n,i,j;
    printf("Enter the no. of rows.\t");
    scanf("%d", &n);

    // print the pattern
        for(i=1; i<=(n%2==0 ? n/2 : (n+1)/2); i++)
        {
            for(j=1; j<=(n%2==0 ? (n/2)-i : ((n+1)/2)-i); j++)
            {
                printf(" ");
            }

            for(j=1; j<=i; j++)
            {
                printf("1 ");
            }

            printf("\n");
        }
        for(i=(n%2==0 ? i-1 : i-2); i>=1; i--)
        {
            for(j=1; j<=(n%2==0 ? (n/2)-i : ((n+1)/2)-i); j++)
            {
                printf(" ");
            }

            for(j=1; j<=i; j++)
            {
                printf("1 ");
            }

            printf("\n");
        }

        return 0;
}