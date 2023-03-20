/* Q1: Input student details - Name, Roll, DOB.
       Calculate student age as of today - 29/12/2020 and display student details with age.   */

#include<stdio.h>

// structure to define details of one student
struct info{
            char name[20];
            int roll;
            // structure to define date
            struct date{
                        int dd,mm,yyyy;
                        }dob;   // dob is a variable of type struct date in struct info
            };

// function to calculate age of a student that returns age in date format
// i.e., dd/mm/yyyy represents an age of yyyy years, mm months and dd days
// assume each month has 31 days
struct date agef(struct info x)
{
    struct date age;
    age.dd=60-x.dob.dd; // calculate the difference of days, 60 = 29(days in this month) + 31(days in previous month)
    age.mm=23-x.dob.mm; // calculate the difference of months, 23 = 11(months in this year, 1 less because 31 days given to difference of days calculation) + 12(months in previous year)
    age.yyyy=2019-x.dob.yyyy;   // calculate the difference of years

    age.mm+=age.dd/31;  // standardize the days and add 1 month to the difference of months for each 31 days
    age.dd%=31;        // update the days to the remaining days
    age.yyyy+=age.mm/12;    // standardize the months and add 1 year to the difference of years for each 12 months
    age.mm%=12;        // update the months to the remaining months

    return age;
}

int main()
{
	struct info s1;
	printf("Enter name of the student:\n");
	gets(s1.name);
	printf("Enter roll no. of the student:\n");
	scanf("%d",&s1.roll);
	printf("Enter dob of the student in DD MM YYYY format:\n");
	scanf("%d%d%d",&s1.dob.dd,&s1.dob.mm,&s1.dob.yyyy);

	printf("\nStudent Details:\n");
	printf("\nName:\t%s\n",s1.name);
	printf("Roll No:\t%d\n",s1.roll);
	printf("DOB:\t%d/%d/%d\n",s1.dob.dd,s1.dob.mm,s1.dob.yyyy);
	struct date s1_age=agef(s1);    // call agef function to calculate age of student
    // display student age, where dd/mm/yyyy represents an age of yyyy years, mm months and dd days
	printf("Age:\t%d Years %d Months %d Days\n",s1_age.yyyy,s1_age.mm,s1_age.dd);

	return 0;
}