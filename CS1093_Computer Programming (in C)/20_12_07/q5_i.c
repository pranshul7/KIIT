/* Q5(i): Find the length of string. (without using strlen)*/

#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter the text :\n");
    gets(a);    // input string

    int i;
    for(i=0; i<100 && a[i]!='\0'; i++);   // find end of string index

    printf("\nLength of string :\t%d\n", i);

    return 0;
}