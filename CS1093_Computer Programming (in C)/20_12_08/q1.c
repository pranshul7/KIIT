/* Q1: Using pointers:
       - access a variable
       - display address of the variable
       - display contents of the pointer
       - display address of pointer variable */

#include<stdio.h>
int main()
{
    int a=7, *pa=&a;

    printf("a=%d\n",*pa);   // access a variable
    printf("&a=%p\n",pa);   // display address of the variable
    printf("pa=%p\n",pa);   // display contents of the pointer
    printf("&pa=%p\n",&pa); // display address of pointer variable

    return 0;
}