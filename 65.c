#include<stdio.h>
#include<stdlib.h>
 
struct studata
{
	int roll;
	char name[50];
	char depart[50];
	char course[20];
	int yoj;
}nos[450] = { 03, "Himanshu Mandal", "IT", "B.tech", 2014,
10, "Om jee jaiswal", "Computer Science", "B.Tech", 2014,
53, "Ankit ", "Computer Applications", "BCA", 2013,
13, "Aman ", "Mechanical", "Diploma", 2013,
1, "Harsh", "Tool and Die", "Diploma", 2012,
2, "Ramesh", "IT", "B.tech", 2014
};
void student_in_year(int year)
{
	int i;
	printf("\n\t\tYear of joining : %d\n\n", year);
	for (i = 0; i <= 450; i++)
	{
		if (nos[i].yoj == year)
		{

			printf("\nRoll Number : %d", nos[i].roll);
			printf("\nName : %s", nos[i].name);
			printf("\nDepartment : %s", nos[i].depart);
			printf("\nCourse : %s\n", nos[i].course);
		}
	}
}
void student_data(int enroll)
{
	int i;
	printf("\nRoll number : %d", enroll);
	for (i = 0; i <= 450; i++)
	{
		if (nos[i].roll == enroll)
		{
			printf("\nName : %s", nos[i].name);
			printf("\nDepartment : %s", nos[i].depart);
			printf("\nCourse : %s\n", nos[i].course);
			printf("\nYear of joining : %d\n", nos[i].yoj);
		}
	}
}
int main()
{
	int yoj, roll, depart;
	printf("\nEnter year of joining of the students : ");
	scanf("%d", &yoj);
	student_in_year(yoj);
	 
	system("cls");
	printf("\nEnter the roll number of the studnet you want data : ");
	scanf("%d", &roll);
	student_data(roll);
	
	printf("\nEnter the Particalurar Department of Students : ");
	scanf("%c", &depart);
	student_data(depart);
	 
	return 0;
}