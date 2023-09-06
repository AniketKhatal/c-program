//addition of two 2d array:
//Algorithm:
//1)delcare three 2d array ,3rd one is for storing the element
//2)enter the element into it
//3)write the logic for adition
//4)after doing additon of two array stored into 3rd array
//5)simply shoe the 3rd array:
	
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3] ,i,j;
	printf("enter the element into the 1st array:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the element into 2nd array:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nlets add these two array:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
