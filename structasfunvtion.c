//Program Name:structure as a finction Argument;

#include<stdio.h>
struct emp
{
	int id;
	long int sal;
};
void display(struct emp);//struct as a function declararion;
int main()
{
	struct emp e;   //struct varialbe declaration
	printf("Enter the id and the salary of the employee:\n");
	scanf("%d%ld",&e.id,&e.sal);
	display(e);    //function calling
	return 0;
}
void display(struct emp x)    //Function Defination.
{
	printf("\nThe id and the salary of the employee is:");
	printf("\n%d\t%ld",x.id,x.sal);
}

