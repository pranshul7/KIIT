/*Que 2: Display the pattern. */

#include<stdio.h>
int main()
{
    // variable declaration
    int rs, re;

    // input starting and ending no. of range
    printf("Enter strating no. of range.\t");
    scanf("%d", &rs);
    printf("Enter ending no. of range.\t");
    scanf("%d", &re);

    // display the pattern
    int f=rs,s=re;
    for(;f<=s; (f++ && s--))
    {
        if(f<=s)
        {
            printf("\n%d\t", f);
        }

        if(f!=s)
        {
            printf("%d\n", s);
        }
    }

    return 0;
}