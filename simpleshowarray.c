//wap to i/p the element in array and display it

#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the element into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",& a[i]);
	}
	printf("\nthe element that u addaed into array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] ----> %d\n",i,a[i]);
	}
	
	return 0;
}
