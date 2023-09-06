//find the second largest element without sorting:

#include<stdio.h>
int main()
{
	int a[10],i;
	printf("enter the element into the array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array  is:\n");
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
		if(a[i]>=max2 && a[i]<max)
		{
			max2= a[i];
		}
	}
	printf("\nthe large element is :%d ",max);
	printf("\nsecond large element: %d",max2);
	return 0;
}
