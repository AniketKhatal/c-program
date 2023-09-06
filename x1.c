//second large element of array;

#include<stdio.h>
int main()
{
	int a[5],i,j;
	printf("Enter the element into the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe array is:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	int max=0,max2=0;
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i] > max2 && a[i] < max)
		{
			max2=a[i];
		}
	}
	printf("\nThe max element in array :%d",max);
	printf("\nThe second largest in array:%d",max2);
	return 0;
}
