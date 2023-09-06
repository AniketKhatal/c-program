//wap to display array in ascending or discendiing order:

#include<stdio.h>
int main()
{
	int a[5],i,j,temp;
	printf("enter the element into the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe array before operation:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nthe array is in asecending order:");//descending order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])//if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
