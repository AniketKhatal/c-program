//Program Name: Merge two array;
#include<stdio.h>
int main()     //main function
{
	int i,a[4],b[8],j;
	printf("Enter the element into the array:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The element of a is:");
	for(i=0;i<4;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nlets copy the element:");
	for(i=0,j=0;i<4;i++)
	{
		b[j]=a[i];
	}
	j++;
	for(i=0;i<4;i++)
	{
		printf("%d",b[i]);
	}
	
	return 0;
}

