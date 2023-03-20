/* Q15: Display pascal triangle. */

#include<stdio.h>
int main()
{
    // input no. of rows to print
    int n;
    printf("Enter the no. of rows.\t");
    scanf("%d", &n);

    int i,j;

    // display pascal triangle
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n-i); j++)
        {
            printf("\t");
        }

        for(j=1; j<=i; j++)
        {
            int b,fi=1,fj=1,fij=1,c;

            for(c=1; c<=(i-1); c++)
                fi=fi*c;

            for(c=1; c<=(j-1); c++)
                fj=fj*c;

            for(c=1; c<=(i-j); c++)
                fij=fij*c;

            b=(fi/fj)/fij;

            printf("\t%d\t", b);
        }

        printf("\n");
    }

    return 0;
}