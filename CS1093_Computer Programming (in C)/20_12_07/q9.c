/* Q9: Copy second word of the string in a new array. */

#include<stdio.h>
int main()
{
    char a[100],b[100];
    printf("Enter the string:\n");
    gets(a);        // input string
    printf("\nOriginal array:\n%s\n",a);    // print original string

    int i,j;
    for(i=0; i<100 && a[i]!=' '; i++);      // find first space
    for(; i<100 && a[i]==' '; i++);         // find next non-space character
    for(j=0; i<100 && a[i]!=' ' && a[i]!='\0'; i++,j++)     // copy second word
        b[j]=a[i];
        b[j]='\0';

    printf("\nCopied array:\n%s\n",b);      // print copied word

    return 0;
}