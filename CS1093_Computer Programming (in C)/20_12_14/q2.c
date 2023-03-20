/* Q2: Take a user input string, for example abcd.
       Then display the following patterns using pointers.
       1) abcd
          bcd
          cd
          d
       2) d
          cd
          bcd
          abcd
       3) dcba
          cba
          ba
          a  */

#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    printf("Enter string:\n");
    gets(a);    // input string
    printf("\n");

    char *p=a;  // p is pointer to a
    int i,j;

    // display patten 1
    for(i=0; a[i]!='\0'; i++)
    {
        p=&a[i];
        printf("%s\n", p);
    }
    printf("\n");

    // display patten 2
    for(i=strlen(a)-1; i>=0; i--)
    {
        p=&a[i];
        printf("%s\n", p);
    }
    printf("\n");

    // display patten 3
    for(i=strlen(a)-1; i>=0; i--)
    {
        for(j=i; j>=0; j--)
            printf("%c",p[j]);

        printf("\n");
    }

    return 0;
}