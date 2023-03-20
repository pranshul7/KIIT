/* Q2: Input student details - Name, Marks in 3 subjects.
       Calculate student average marks, and highest marks among 3 subjects.
	   Then display student results.  */

#include<stdio.h>

// structure to define details of one student
struct info {
                char name[20];	// name of student
                int m1,m2,m3;	// marks in 3 subjects
				// structure to define results of one student
                struct res {
                            int high;	// highest marks among 3 subjects
                            float avg;	// average marks
                            }r;	// r is a variable of type struct res in struct info to store results of a student
            };

// function to get details of one student
void scan(struct info *x)
{
	printf("\nEnter student name:\n");
	scanf("%[^\n]",&x->name);
	getchar();
	printf("Enter student marks in 3 subjects:\n");
	scanf("%d%d%d",&x->m1,&x->m2,&x->m3);
	getchar();
}

// function to calculate results of one student
struct res resf(struct info y)
{
	struct res s_res;
	s_res.avg=(y.m1 + y.m2 + y.m3)/3.0;
	s_res.high=y.m1;
	if(s_res.high<y.m2)
		s_res.high=y.m2;
	if(s_res.high<y.m3)
		s_res.high=y.m3;

	return s_res;
}

int main()
{
	int i;
	struct info s[5];
	for(i=0; i<5; i++)
		scan(&s[i]);	// call scan function to get details of i'th student

	for(i=0; i<5; i++)
		s[i].r=resf(s[i]);	// call resf function to calculate results of i'th student

	// display students results
	printf("\n\nStudents Details:\n\n");
	for(i=0; i<5; i++)
	{
		printf("Student Name:\t%s\n",s[i].name);
		printf("Student Marks:\t%d %d %d\n",s[i].m1,s[i].m2,s[i].m3);
		printf("Student Average Marks:\t%f\n",s[i].r.avg);
		printf("Student Highest Marks:\t%d\n",s[i].r.high);
		printf("\n");
	}

	return 0;
}