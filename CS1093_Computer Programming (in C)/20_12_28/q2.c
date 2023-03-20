/* Q2: Find maximum value of a set of 3 numbers. */

#include<stdio.h>

// structure to define a set of 3 numbers
struct s{int n[3];};

// function to find maximum value of a set of 3 numbers
int maxf(struct s x)
{
    int max=x.n[0];
    if(max<x.n[1])
        max=x.n[1];
    if(max<x.n[2])
        max=x.n[2];

    return max;
}

int main ()
{
    struct s s1;    // s1 is a set of 3 numbers
    printf("Enter 3 integers:\n");
    scanf("%d%d%d",&s1.n[0],&s1.n[1],&s1.n[2]);
    int max=maxf(s1);   // call maxf() function to find maximum value max of set s1
    printf("\nMaximum value:\t%d\n",max);
    return 0;
}