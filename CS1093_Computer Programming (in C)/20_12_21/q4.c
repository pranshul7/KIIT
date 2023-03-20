/* Q4: Return the no. of even and odd integers in the array. */

#include<stdio.h>

// function to find no. of even and odd integers in the array
// b is a pointer to the array, size is the size of the array b
// pe and po are pointers to the variables to store the no. of even and odd integers
void f(int *b, int size, int *pe, int *po)
{
    int e=0,o=0,i;  // e and o are variables to store the no. of even and odd integers respectively
    for(i=0; i<10; i++)
        if(b[i]%2==0)
            e++;
        else
            o++;
    *pe=e;  // store the no. of even integers in the variable pointed by pe
    *po=o;  // store the no. of odd integers in the variable pointed by po
}

int main()
{
    int even,odd;
    int a[10]={3,4,8,6,1,13,9,5,7,2};
    f(a,10,&even,&odd); // call function to find no. of even and odd integers in array a
    printf("Even=%d\n",even);
    printf("Odd=%d\n",odd);

    return 0;
}