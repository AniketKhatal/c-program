O//function recursion

#include<stdio.h>
int main()
{
	void show(int);//declaration
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	show(num);//calling
	return 0;
}
void show(int num)//Definition
{
	if(num==0)
	{
		printf("END");
	}
	else
	{
		printf("Good Morning\n");
		show(num-1);//Recurive call
	}
}
