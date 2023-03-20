/* Q2 : Input a string and display in forward and backward.  */

#include<stdio.h>
int main()
{
    char a[200];    // declare a char array
    int i;

    printf("Enter the string.\n\n");
    scanf("%[^\n]", a);     // input the string

    printf("\n\nForward :\n");  // display the string in forward direction
    for(i=0; i<200 && a[i]!='\0'; i++)
        printf("%c", a[i]);

    printf("\n\nBackward :\n"); // display the string in backward direction
    if(a[i]=='\0')
        for(i-=1; i>=0; i--)
            printf("%c", a[i]);
    else
        for(i-=1; i>=0; i--)
            printf("%c", a[i]);

    printf("\n\n");

    return 0;
}