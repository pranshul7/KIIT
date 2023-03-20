/* Q5: Find earliest date among three dates. */

#include<stdio.h>

// structure to define a date
struct date{
            int d,m,y;};

// function to find the earliest date among two dates
struct date order2(struct date d1, struct date d2)
{
    if(d1.y>d2.y)
        return d1;
    else if(d1.y<d2.y)
        return d2;
    else
    {
        if(d1.m>d2.m)
            return d1;
        else if(d1.m<d2.m)
            return d2;
        else
        {
            if(d1.d>d2.d)
                return d1;
            else if(d1.d<d2.d)
                return d2;
            else
                return d1;
        }
    }
}

// function to find the earliest date among three dates
struct date highf(struct date *x, int size)
{
    struct date high=x[0];
    for(int i=1;i<size;i++)
        high=order2(high,x[i]);
    return high;
}

int main()
{
    struct date a[3];   // array of 3 dates
    printf("Enter 3 dates:\n");
    for(int i=0;i<3;i++)
        scanf("%d%d%d",&a[i].d,&a[i].m,&a[i].y);    // get 3 dates
    struct date high=highf(a,3);    // call highf() function to find the earliest date among three dates
    printf("\nHighest Date :\t%d/%d/%d\n",high.d,high.m,high.y);    // display the earliest date
    return 0;
}