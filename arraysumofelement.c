//Print the sum of all element of the array:

#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	printf("Enter the elemnt into the array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe rray is :");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
		sum=sum+a[i];
	}
	printf("\nThe sum of the elment of the array:%d",sum);
	
	return 0;
}
