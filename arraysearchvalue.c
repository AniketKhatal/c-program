//wap to search the value form the array

#include<stdio.h>
int main()
{
	int a[5],i,svalue,flag=0;
	printf("enter the element of array\n");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("printing the element of array:\n");
	for(i=0;i<=5;i++)
	{
		printf("a[%d] --> %d\n",i,a[i]);
	}
	printf("searching element from given array");
	printf("enter the search element:");
	scanf("%d",&svalue);
	for (i=0;i<=5;i++)
	{
		if(a[i]==svalue)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("value is present");
	}
	else
	{
		printf("value not present");
	}
	return 0;
}
