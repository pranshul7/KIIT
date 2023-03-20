/*Que 3: Take 3 numbers from user where first two define range and third define size. Display calendar with no. of columns equal to size. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n1,n2,n3,c;

    // input three numbers
    printf("Enter three numbers\t");
    scanf("%d%d%d", &n1,&n2,&n3);

    // display no. in the range in the form of calendar with given column size
    for(c=1;n1<=n2;(c++ && n1++))
    {
        printf("%d\t", n1);

        if(c%n3 == 0)
            printf("\n");
    }

    return 0;
}