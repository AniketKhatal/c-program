/*
1
2*2
3*3*3
4*4*4*4
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j<i)
			{
				printf("%d*",j);
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
