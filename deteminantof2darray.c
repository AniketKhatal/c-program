//wap to find determinant of matrix 
//| 1  2  1
//| 4  0  2
//| 3  5  1

#include<stdio.h>
int main()
{
	int a[3][3],i,j,deter;
	printf("\nenter the element into the array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nmatrix is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("determinant of the matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			deter=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
		}
	}
	printf("\nthe determinant of the matrix :%d\n",deter);
	return 0;
}

