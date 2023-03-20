/* Que 1: Display 1 to 100 and 100 to 1 */

#include<stdio.h>
int main()
{
    // initialize counter
    int a=1;

    // display 1 to 100
    while(a<101)
    {
        printf("%d\n", a);
        a++;
    }

    // display 100 to 1
    while(a>1)
    {
        printf("%d\n", a-1);
        a--;
    }

    return 0;
}