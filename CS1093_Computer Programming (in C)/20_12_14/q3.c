/* Q3: Input 4 strings in an array. Then concatenate those 4 strings to form a single string and store it in another array and display it. */

#include<stdio.h>
#include<string.h>
int main()
{
    // declare arrays and pointers to arrays
    char a[40],b[40], *p=a,*q=b, len;

    // input 4 strings
    int i;
    printf("Enter 4 strings:\n");
    for(i=0; i<4; i++)
    {
        p=a+(i*10);
        gets(p);
    }

    b[0] = '\0';   // initialize array b to empty string
    // concatenate strings
    for(i=0; i<4; i++)
    {
        p=a+(i*10);
        len=strlen(b);
        q=&b[len];
        strcat(q,p);
    }

    printf("\nConcatenated string:\n%s\n",b);    // display concatenated string

    return 0;
}