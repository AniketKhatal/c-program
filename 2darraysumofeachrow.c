//Program Name:sum of eah row of the 2d array;
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("Enter the element into the array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe sum of each row of the array:\n");
	for(i=0;i<3;i++)
	{
		int sum=0;
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
			printf("%d\t",a[i][j]);
			
		}
		printf("=%d\n",sum);
	}
	//printf("=%d\n",sum);//sum of all element of 2d array
	return 0;
}

