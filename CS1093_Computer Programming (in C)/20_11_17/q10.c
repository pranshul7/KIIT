/* Q10: Print the pattern:
        7    8   9   10
        6    5   4
        2    3
        1
*/

#include<stdio.h>
int main()
{
    // variable declaration
    int i,j,n;

    // input no. of rows to print
    printf("Enter no. of rows.\t");
    scanf("%d", &n);

    // print the pattern
    for(i=n; i>=1; i--)
    {
        if(i%2==0)
        {
            for(j=(((i-1)*i)/2)+1; j<=(i*(i+1))/2; j++)
                printf("%d\t", j);
        }
        else
        {
            for(j=(i*(i+1))/2; j>((i-1)*i)/2; j--)
                printf("%d\t", j);
        }

        printf("\n");
    }

    return 0;
}