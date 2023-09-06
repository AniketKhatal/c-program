// WAP to create 3 x 3 matrixes and find the largest in matrix and display its row and column number 
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("enter the element:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the a[%d][%d]\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\ndisplay the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("the largest element in matrix is:");
	int max=0,x,y;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				x=i;
				y=j;
				
			}
		}
	}
	printf("a[%d][%d]=%d",x,y,max);
	
	return 0;
}
