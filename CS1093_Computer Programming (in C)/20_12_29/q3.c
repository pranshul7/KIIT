/* Q3: Input 3 dates and short them in an order.  */

#include<stdio.h>

// structure to define a date
struct day{
            int d,m,y;  // d=day, m=month, y=year
            };

// function to compare 2 dates (d1 & d2) and return the earliest date
struct day * order2(struct day *d1, struct day *d2)
{
    if(d1->y>d2->y) // compare year
        return d1;
    else if(d1->y<d2->y)    // compare year
        return d2;
    else
    {
        if(d1->m>d2->m) // compare month
            return d1;
        else if(d1->m<d2->m)    // compare month
            return d2;
        else
        {
            if(d1->d>d2->d) // compare day
                return d1;
            else if(d1->d<d2->d)    // compare day
                return d2;
            else
                return d1;
        }
    }
}

// function to sort 3 dates in an order
// x is an array of 'size' no. of dates
void order(struct day *x, int size)
{
    // iterate 'size' times
    for(int i=0; i<size; i++)
    {
        struct day *high=&x[0]; // assume the first date is the earliest
        for(int j=1; j<size; j++)   // then compare it with the rest of the dates 
            high=order2(high,&x[j]);
        printf("\n%d Earliest:\t%d/%d/%d\n",i+1,high->d,high->m,high->y);   // print the earliest date

        // set the i-th earliest date to 0/0/0 so that in the next iteration it is not considered
        high->d=0;
        high->m=0;
        high->y=0;
    }
}

int main()
{
    struct day d[3];
    printf("Enter 3 dates in DD MM YYYY format:\n");
    for(int i=0; i<3; i++)
        scanf("%d%d%d",&d[i].d,&d[i].m,&d[i].y);

    order(d,3); // call order function to sort the dates and display them

    return 0;
}