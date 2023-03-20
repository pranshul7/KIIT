/* Q3(i): Use pointer arithmetic to take input and display values of variables.  */

#include<stdio.h>
int main()
{
    int a[3],i;
    printf("Enter three numbers:\n");

    // input values
    for(i=0; i<3; i++)
        scanf("%d", a+i); // (a+i) is the address of a[i]
    printf("\n");

    // display values
    for(i=0; i<3; i++)
        printf("%d\t", *(a+i)); // *(a+i) is the value of a[i]
    printf("\n");

    return 0;
}