/* Q6: Swap two halves of an even size string.  */

#include<stdio.h>
int main()
{
    char a[100],t;
    printf("Enter the even size string:\t");
    gets(a);    // input string

    printf("\nOriginal array:\t%s\n",a);    // print original string
    int i,j;
    for(i=0; i<100 && a[i]!='\0'; i++);     // find length of string

    // swap two halves
    for(j=0; j<i/2; j++)
    {
        t=a[j];
        a[j]=a[j+(i/2)];
        a[j+(i/2)]=t;
    }

    printf("\nNew array:\t%s\n",a);     // print new string

    return 0;
}