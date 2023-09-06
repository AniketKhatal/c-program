//find the minimun element from given array

#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter the element in to the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe array is:");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	int min=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nThe minimum element of the give array:%d",min);
	return 0;
}
