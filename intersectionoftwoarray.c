//intersection between two array:

#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],i,j;
	printf("enter the element into the  a array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element into b array:\n");
	for(j=0;j<5;j++)
	{
		scanf("%d",&b[j]);
	}
	printf("\nthe a array is:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nthe b array is:\n");
	for(j=0;j<5;j++)
	{
		printf("%d\t",b[j]);
	}
	
	printf("\nthe intersection of both array:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(a[i]==b[j])
			{
			printf("%d\t",a[i]);
			//break;
			}
		}	
	}
	
	return 0;
}
