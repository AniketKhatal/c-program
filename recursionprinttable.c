//Program Name:Printing the table with recursion

#include<stdio.h>
int main()
{
	void table(num);//dclaration
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	table(no);//calling;
	return 0;
}
int count=0;
void table(int x)
{
	if(count==10)
	{
		printf("END");
	}
	else
	{
		count++;
		printf("%d * %d  = %d\n",x,count,x*count);
		table(x);
	}
}

