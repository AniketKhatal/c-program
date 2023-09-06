//wap to display the odd element into seperate array even element into seperate element

#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i,j;
	printf("enter the element into the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe array is :");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\nthe even number in array b:");
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			b[i]=a[i];
		}
		printf("%d",b[i]);
	}
	printf("\nthe odd number in array c:");
	for(i=0;i<5;i++)
	{
		if(a[i]%2!=0)
		{
			c[i]=a[i];
		}
		printf("%d",c[i]);
	}
	return 0;
}
