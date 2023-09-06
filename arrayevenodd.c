//find the even and odd number in array;

#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("eneter the size of array:");
	scanf("%d",&n);
	printf("enter the element into tha array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display the element:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
	printf("the even element in array:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	printf("the odd element in array:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d\n",a[i]);
		}
	}
	
	return 0;
}
