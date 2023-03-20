/* Que 6: Display the calender of the month if the day of date 1 is given. */

#include<stdio.h>
int main()
{
    // input day of date 1
    int d;
    printf("What was the day on day 1 of the month ?. Enter your answer as an integer value. Like 1 for Sunday, 2 for Monday and so on upto 7 for Saturday.\n");
    scanf("%d", &d);

    // display calender
    if(d>=1 && d<=7)
    {
    printf("\nS\tM\tT\tW\tT\tF\tS\n");  // display days of week

    int i=1;
    while(i<d)
    {
        printf("\t");   // display empty spaces
        i++;
    }

    int j=1;
    while(j<=31)    // display dates in calender format
    {
        printf("%d\t", j);

        if((j-(8-d))%7==0)
            printf("\n");

        j++;
    }
    }
    else
        printf("\nEnter valid values.\n");

    return 0;
}