/* Q5(iii): Append strings. (without using strcat) */

#include<stdio.h>
int main()
{
    char a[10], b[10];
    int i,j;
    printf("Enter the string for 'a' :\t");
    gets(a);    // input string 1
    printf("Enter the string for 'b' :\t");
    gets(b);    // input string 2

    // append string 2 to string 1
    for(i=0; i<10 && a[i]!='\0'; i++);
    for(j=0; j<10 && b[j]!='\0'; j++)
        a[i+j]=b[j];
        a[i+j]=b[j];

    printf("\nSring in 'a' :\t%s\n",a);   // print appended string

    return 0;
}