//wap to print square of the matrix:

#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("enter the element into the array:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix before squaring:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The square of matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]*a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
