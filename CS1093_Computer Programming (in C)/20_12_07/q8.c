/* Q8: Reverse two halves of a string and copy the new string in an array.  */

#include<stdio.h>
int main()
{
    char a[100],b[100];
    printf("Enter the string:\n");
    gets(a);    // input string
    printf("\nOriginal array:\n%s\n",a);    // print original string

    int i,j,c;
    for(c=0; c<100 && a[c]!='\0'; c++);     // find length of string 'a'
    b[c]='\0';  // add null character to represent end of string in 'b' (copied array)
    for(i=c-1,j=c/2; i>=c/2; i--,j++)       // reverse copy second half of the string
        b[j]=a[i];
    for(i=(c/2)-1,j=0; i>=0; i--,j++)       // reverse copy first half of the string
        b[j]=a[i];

    printf("\nCopied array:\n%s\n",b);      // print copied string

    return 0;
}