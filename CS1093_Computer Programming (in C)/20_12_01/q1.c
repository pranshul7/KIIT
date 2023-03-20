/* Q1 : Input and display a sentence.  */

#include<stdio.h>
int main()
{
    char a[200];    // declare a char array

    printf("Enter the sentence.\n");
    scanf("%[^\n]", a); // input the sentence

    printf("\n%s\n", a);    // display the sentence

    return 0;
}