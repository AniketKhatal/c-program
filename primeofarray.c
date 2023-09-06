//wap to create array of size 10 insert  elements in it and display all prime elment from array:

#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the number into the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe element of array:");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\nprime number that are present into the array:\n");
	
	for(i=0;i<n;i++)
	{	
		int count=0,j;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
				
			}
		}
	if(count==2)
	{
		printf("\t%d",a[i]);
	}
	}
	
	return 0;
}
