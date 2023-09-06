//Program Name:

#include<stdio.h>
struct stud
{
	int id;
	char nm[20];
	float per;
};//s[5];
int main()
{
	struct stud s[5];
	int i;
	printf("Enter the data into the structure :");
	for(i=0;i<3;i++)
	{
		scanf("%d %s %f",&s[i].id,&s[i].nm,&s[i].per);
	}
	printf("The data os student from its structure :");
	for(i=0;i<3;i++)
	{
		printf("\n%d\t%s\t%f",s[i].id,s[i].nm,s[i].per);
	}
	return 0;
}
