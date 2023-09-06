//Program Name:Remove or delete per element from array;

#include<stdio.h>
int main()
{
	int a[6],i,j,index,ele;
	printf("Enter the element into that array:");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("\na[%d]---->%d",i,a[i]);
	}
	printf("\nEnter the element that you want to delete:");
	scanf("%d",&ele);
	index=5;
	for(i=0;i<=index;i++)
	{
		if(a[i]==ele)
		{
			for(j=i+1;j<=index;j++)
			{
				a[j-1]=a[j];
			}
			i--;//for same cosecative value eg.1,1,2,3,4,5 rmv 1,1
			index--;
		}
	}
	printf("\nAfter the delete operation:\n");
	for(i=0;i<=index;i++)
	{
		printf("\na[%d]---->%d",i,a[i]);
	}
}


