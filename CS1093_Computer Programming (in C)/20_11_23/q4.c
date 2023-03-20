/* Q4: Consider an even size array {1,2,3,4,5,6}. Swap the values of the array such that the new array becomes: 2 1 4 3 6 5 ,
then display the new array. */

#include<stdio.h>
int main()
{
    // initialize array
    int x[6]={5,9,6,3,1,4}, c,i,j;

    // display original array
    printf("Array : ");

    for(i=0; i<6; i++)
    {
        printf("%d\t", x[i]);
    }

    // swap the values of the array in the given pattern
    for(i=0,j=1; i<6 && j<6; i+=2,j+=2)
    {
        c=x[i];
        x[i]=x[j];
        x[j]=c;
    }

    printf("\n\n");

    // display new array
    printf("Array : ");

    for(i=0; i<6; i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");

    return 0;
}