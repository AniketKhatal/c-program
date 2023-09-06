//table using ptr

#include<stdio.h>
int main()
{
	int a,*x,i,table;
	printf("enter the number that you want to print the table:");
	scanf("%d",&a);
	x=&a;
	for(i=1;i<=10;i++)
	{
		table=*x *i;
		x++;
	}
	printf("%d\n",table)
}
