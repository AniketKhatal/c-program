//array program to arrage in ascending order:

#include<stdio.h>
int main()
{
	int a[10],i,n,j,k,temp=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("entering the element into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(k=0;k<n-1;k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	printf("printing the sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
}
