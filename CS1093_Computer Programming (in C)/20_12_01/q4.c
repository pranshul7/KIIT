/* Q4: Input a sentence and display its second word.  */

#include<stdio.h>
int main()
{
    // variable declaration
    char a[100];
    int i,j;

    // input sentence
    printf("Enter the sentence:\n");
    scanf("%[^\n]",a);

    // display original sentence
    printf("\nOriginal array:\n%s\n",a);

    // display second word
    for(i=0; i<100 && a[i]!=' '; i++);
    for(; i<100 && a[i]==' '; i++);
    printf("\nSecond word:\n");
    for(; i<100 && a[i]!=' ' && a[i]!='\0'; i++)
        printf("%c",a[i]);

    return 0;
}