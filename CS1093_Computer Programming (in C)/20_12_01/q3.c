/* Q3 : Input a string, then reverse the string and display the reversed string.  */

#include<stdio.h>
int main()
{
    // variable declaration
    char a[200],c;
    int i,j;

    printf("Enter the string.\n\n");
    scanf("%[^\n]", a);    // input the string

    // display original string
    printf("\n\nOriginial string :\n%s\n\n", a);

    for(j=0; j<200; j++)
        if(a[j]=='\0')
            break;

        // reverse the string
        for(i=0,j-=1; i<j; i++,j--)
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
    
    // display reversed string
    printf("\n\nReversed string :\n%s\n\n", a);

    return 0;
}