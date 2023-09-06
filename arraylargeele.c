//wap to find the second largest element of array;

#include<stdio.h>
int main()
{
	int a[5],i,j,len,temp;
	printf("enter the element into the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe array is of:");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	len=sizeof(a)/sizeof(a[0]);
//	printf("\nthe array in ascending order:");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
//		printf("\nthe array in ascending order:");
//		for(i=0;i<5;i++)
//		{
//			printf(" %d ",a[i]);
//		}
		printf("\nthe largest element in array:%d",a[0]);
	//if()
	return 0;
}
