//table of 1-10 using nasted for loop:

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,table;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			table=i*j;
			printf("\n%d",table);
		}
	printf("\n");
	}
	return 0;
}
