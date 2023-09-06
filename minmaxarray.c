//3.find the max number and min number in array:

#include<stdio.h>
int main()
{
	int a[5],i,n;
	printf("enetr the size of array:");
	scanf("%d",&n);
	printf("enter the element into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0],min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}
		printf("the maximum element from tha array:%d\n",max);
		printf("\nthe minimum element from tha array:%d\n",min);
	return 0;
}
