//Program Name:structure

//#include<stdio.h>
//struct employee
//{
//	int id;
//	char nm[20];
//	long int sal;
//};
//struct employee emp;
//int main()
//{
//	printf("Enter the id name and salary of the employee:");
//	scanf("\n%d\n%s\n%d",&emp.id,&emp.nm,&emp.sal);
//	printf("\nThe id is%d",emp.id);
//	printf("\nThe name is%s",emp.nm);
//	printf("\n the sal is :%d",emp.sal);
//	return 0;
//}

#include<stdio.h>
struct stud
{
	int rollno;
	char name[1];
}s;

int main()
{
	int s1;
	s1= sizeof(s);
	printf("The size of the structure is:%d",s1);
}
