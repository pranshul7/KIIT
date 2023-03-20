/* Q5(ii): Copy string. (without using strcpy) */

#include<stdio.h>
int main()
{
    char a[10], b[10];
    printf("Enter the string for 'a' :\t");
    gets(a);    // input string

    // copy string
    int i=-1;
    do{
        i++;
        b[i]=a[i];
        }while(i<10 && a[i]!='\0');

    printf("\nString in 'b' :\t%s\n",b);

    return 0;
}