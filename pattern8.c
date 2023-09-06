/*

*/
#include<stdio.h>
int main()
{
	int i,j;
	char ch;
	for(i=1,ch='A';i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j>=6-i)
			{
				printf("%c",ch=ch+1);
			}
			else
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
	return 0;
}
