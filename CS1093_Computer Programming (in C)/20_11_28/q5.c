/* Q5: Display at which indexes a user input number is present in the array.  */

#include<stdio.h>
int main()
{
    // variable declaration and array initialization
    int a[8]={5,3,7,5,9,1,2,4}, n,i,c1=1,c2=0;
    
    // input number to check
    printf("Enter the number:\t");
    scanf("%d", &n);

    // iterate through the array and check if the number is present
    for(i=0; i<8; i++)
    {
        if(a[i]==n)
        {
            c2++;
            for(; c1==1; c1++)
                printf("\n\nThe number is present in the following indexes :\n\n");

            printf("%d\n", i);
        }
    }
    
    // if the number is not present
    if(c2==0)
        printf("\n\nThe number is not present in the array.\n\n");


    return 0;
}