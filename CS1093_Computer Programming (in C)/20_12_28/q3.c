/* Q3: Store employee details and display their maximum and average salary. */

#include<stdio.h>

// structure to store details of one employee
struct emp{
            char name[20];
            int sal;};

// function to store details of employees in an array of structures of size 'size'
void info(struct emp *z, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%[^\n]",z[i].name);  // get name of employee
        getchar();
        scanf("%d",&z[i].sal);    // get salary of employee
        getchar();
    }
}

// function to find average salary of employees
float avgf(struct emp *x, int size)
{
    int i;
    float sum=0;
    for(i=0;i<size;i++)
        sum=sum+x[i].sal;

    return sum/size;
}

// function to find maximum salary of employees
int maxf(struct emp *y, int size)
{
    int max=y[0].sal;
    for(int i=1;i<size;i++)
        if(max<y[i].sal)
            max=y[i].sal;

    return max;
}

int main()
{
    struct emp e[5];    // e is an array of struct emp type of size 5 to store details of 5 employees
    printf("Enter 5 employee's details:\n");
    info(e,5);  // call info() function to get details of 5 employees and store them in array e
    printf("\nAvg. Salary = %f\n",avgf(e,5));   // call avgf() function to find average salary of employees and display it
    printf("\nMax. Salary = %d\n",maxf(e,5));   // call maxf() function to find maximum salary of employees and display it
    return 0;
}