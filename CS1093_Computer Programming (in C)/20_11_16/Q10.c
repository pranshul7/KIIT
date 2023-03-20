/*Que 10: Display the calendar for year 2000. */

#include<stdio.h>
int main()
{
    // variable declaration
    int d1,c,m,nd;

    // input the day on 1/1/2000
    printf("Enter what was the day on 1/1/2000 , in number , like 1 for Sunday, 2 for Monday, and 7 for Saturday.\n");
    scanf("%d", &d1);

    // print the calendar
    if(d1>0 && d1<8)    // validate the input day on 1/1/2000
    {
    for(m=1;m<13;m++)   // iterate to print calendar for all months
    {
        // define number of days in the month, starting day of the month and print the month name
        if(m==1)
        {
            nd=31;
            printf("\n\n\t\tJanuary\n");
        }
        else if(m==2)
        {
            nd=29;
            d1=d1+3;
            printf("\n\n\t\tFebruary\n");
        }
        else if(m==3)
        {
            nd=31;
            d1=d1+1;
            printf("\n\n\t\tMarch\n");
        }
        else if(m==4)
        {
            nd=30;
            d1=d1+3;
            printf("\n\n\t\tApril\n");
        }
        else if(m==5)
        {
            nd=31;
            d1=d1+2;
            printf("\n\n\t\tMay\n");
        }
        else if(m==6)
        {
            nd=30;
            d1=d1+3;
            printf("\n\n\t\tJune\n");
        }
        else if(m==7)
        {
            nd=31;
            d1=d1+2;
            printf("\n\n\t\tJuly\n");
        }
        else if(m==8)
        {
            nd=31;
            d1=d1+3;
            printf("\n\n\t\tAugust\n");
        }
        else if(m==9)
        {
            nd=30;
            d1=d1+3;
            printf("\n\n\t\tSeptember\n");
        }
        else if(m==10)
        {
            nd=31;
            d1=d1+2;
            printf("\n\n\t\tOctober\n");
        }
        else if(m==11)
        {
            nd=30;
            d1=d1+3;
            printf("\n\n\t\tNovember\n");
        }
        else if(m==12)
        {
            nd=31;
            d1=d1+2;
            printf("\n\n\t\tDecember\n");
        }

        // adjust the starting day of the month
        if(d1>7)
            d1=d1-7;


        // print days of the week
        printf("\t\t--------\n");
        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
        printf("---------------------------------------------------\n");

        // print intitial spaces
        for(c=1; c<d1; c++)
            printf("\t");

        // print the days of the month in calendar format
        for(c=1; c<=nd; c++)
        {
            if((c+d1-8)%7!=0)
                printf("%d\t", c);
            else
                printf("%d\n", c);
        }
    }
    }
    else
        printf("\nEnter valid value.\n");

    return 0;
}