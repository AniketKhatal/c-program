//wap to create 2d array of 3*3 and find sum of 
// |5  10  8
// |4  9  12
// |1  6  9

#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("enter the element into the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("the sum is :\n");
	int sum=0,summ=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==1)
			{
				sum+=a[i][j];
			}
			if(j==1)
			{
				summ+=a[i][j];
			}
		}
	}
	printf("sum=%d\n",sum);
	printf("summ=%d\n",summ);
	
	return 0;
}
