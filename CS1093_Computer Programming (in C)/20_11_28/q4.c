/* Q4: Convert decimal to binary using array. */

#include<stdio.h>
int main()
{
    // variable declaration
    int n, a[32]={},tn,c;

    // input decimal number
    printf("Enter the number:\t");
    scanf("%d", &n);

    if(n>=0)    // if decimal number is positive
    {
        tn=n;
        for(c=31; tn>0 && c>=0; c--)    // fill 32 bits of the decimal equivalent array
        {
            a[c]=tn%2;
            tn=tn/2;
        }
    }
    else    // if decimal number is negative
    {
        tn=-n;  // take the decimal number as positive temporarily and finds its binary equivalent
        for(c=31; tn>0 && c>=0; c--)    // fill 32 bits of the decimal equivalent array
        {
            a[c]=tn%2;
            tn=tn/2;
        }

        /* take 2's complement of the binary equivalent of the temporary +ve decimal number
        to get the binary equivalent of the negative decimal number */
        for(c=31; c>=0; c--) 
        {
            if(a[c]==1)
            {
                for(c-=1; c>=0; c--)
                    a[c]=(!a[c]);
            }
        }
    }

    // display binary equivalent of the decimal number
    printf("\n\nThe binary value of the number is :\n\n");
    for(c=0; c<32; c++)
        printf("%d", a[c]);

    printf("\n\n");

    return 0;
}