/* Q1: Create a structure for employee details. */

#include<stdio.h>

// Structure for employee details
struct emp{
            char name[20];
            int no,sal;
            };
int main()
{
    struct emp e1;  // struct emp is the datatype of e1
    printf("Enter employee details:\n");
    gets(e1.name);  // input employee name
    scanf("%d%d",&e1.no,&e1.sal);   // input employee number and salary

    // display employee details
    printf("\nEmployee details:\n\nName:\t%s\nEmployee Number:\t%d\nEmployee Salary:\t%d\n",e1.name,e1.no,e1.sal);

    return 0;
}