//pattern 2
/*
enter the size:5
 1
 1  2
 1  2  3
 1  2  3  4
 1  2  3  4  5
*/

#include<stdio.h>
int main()
{
	int i,j,size;
	printf("enter the size:");
	scanf("%d",&size);
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			if(i>=j)
			{
				printf(" %d ",j);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
