/* Q4: Swap a pair of 2 numbers. */

#include<stdio.h>

// structure to define a pair of 2 numbers
struct num{ int n1,n2;};

// function to swap the pair of numbers
void swap(struct num *x)
{
    int tn=x->n1;
    x->n1=x->n2;
    x->n2=tn;
}

int main()
{
    struct num n;   // n is a structure variable of type struct num to store a pair of 2 numbers
    printf("Enter 2 integers:\n");
    scanf("%d%d",&n.n1,&n.n2);  // get the pair of 2 numbers
    printf("\nBefore swap:\tN1 = %d\tN2 = %d\n",n.n1,n.n2); // display the pair of 2 numbers before swapping
    swap(&n);   // call swap() function to swap the pair of 2 numbers
    printf("\nAfter swap:\tN1 = %d\tN2 = %d\n",n.n1,n.n2);  // display the pair of 2 numbers after swapping
    return 0;
}