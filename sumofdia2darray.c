//wap to create 2d array of 3*3 
//find sum of diagonal of matrix;

#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("enter the element of the array:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the 2d array is:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("the adition of the diagonal are:");
	 int sumr=0,suml=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				suml=suml+a[i][j];
			}
			if(j==2-i)
			{
				sumr=sumr+a[i][j];
			}
		}
	}
	printf("%d\n",suml);
	printf("%d\n",sumr);
	return 0;
}
