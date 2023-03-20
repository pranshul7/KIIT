/* Q6: Check the frequency of the user input number in an array.  */

#include<stdio.h>
int main()
{
    // variable declaration and array initialization
    int a[8]={5,3,7,5,9,1,2,4}, n,i,c=0;

    // input number to check
    printf("Enter the number:\t");
    scanf("%d", &n);

    // iterate through the array and count the frequency
    for(i=0; i<8; i++)
        if(a[i]==n)
            c++;

    // display frequency
    printf("\n\nThe frequency of the number is :\t%d\n\n", c);

    return 0;
}