/* Q5(iv): Compare strings. (without using strcmp) */

#include<stdio.h>
int main()
{
    char a[10], b[10];
    printf("Enter the string for 'a' :\t");
    gets(a);    // input string 1
    printf("Enter the string for 'b' :\t");
    gets(b);    // input string 2

    // compare strings
    int i;
    for(i=0; a[i] == b[i] && a[i] != '\0' ;i++);
    if(a[i] == b[i])
        printf("\nBoth strings are equal.\n");
    else
        printf("\nBoth strings are NOT equal.\n");

    return 0;
}