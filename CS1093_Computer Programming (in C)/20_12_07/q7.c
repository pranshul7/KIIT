/* Q7: Copy reverse of string in a new array. */

#include<stdio.h>
int main()
{
    char a[100],b[100];

    printf("Enter the string:\n");
    gets(a);    // input string
    printf("\nOriginal array:\n%s\n",a);    // print original string

    // copy reverse of string in a new array
    int i,j;
    for(i=0; i<100 && a[i]!='\0'; i++);     // find length of string
    for(i-=1,j=0; i>=0; i--,j++)
        b[j]=a[i];
        b[j]='\0';    // add null character at the end

    printf("\nCopied array:\n%s\n",b);      // print copied string

    return 0;
}