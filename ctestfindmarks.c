//Program Name:Write a program to store student record( rno, name, marks) and
//display the record of all student who have marks between given range (take
//range from user as input)
//display record of all students having marks between 50 and 75

#include<stdio.h>
struct stud{
	int rno;
	char nm[10];
	int marks;
}s[3];
int main()     //main function
{
	int i,x;
	printf("Enter the rollno ,name and marks of the student:");
	for(i=0;i<3;i++)
	{
		scanf("%d%s%d",&s[i].rno,&s[i].nm,&s[i].marks);
	}
	printf("\n The record is:\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t%s\t%d\n",s[i].rno,s[i].nm,s[i].marks);
	}
	printf("\nthe marks bte 50 to 75:\n");
	for(i=0;i<3;i++)
	{
		if(s[i].marks>50 && s[i].marks<=75)
		{
//			printf("hi");
//			x=i;
//			printf("%d\t%s\t%d\n",s[x].rno,s[x].nm,s[x].marks);	
			printf("%d\t%s\t%d\n",s[i].rno,s[i].nm,s[i].marks);
		}
	}
	
	return 0;
}

