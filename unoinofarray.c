//Union of the two array:

#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],i,j;
	printf("enter the element into the array:\n");
	printf("array a:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray b:");
	for(j=0;j<5;j++)
	{
		scanf("%d",&b[j]);
	}
	printf("\narray before union:\n");
	printf("\narray a:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\narray b:");
	for(j=0;j<5;j++)
	{
		printf("%d\t",b[j]);
	}
	printf("\nthe union of the array:\n");
	int k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
				c[k]=a[i];
				//break;
				k++;
			}
//			if(a[i]!=b[j])
//			{
//				c[k]=b[j];
//			}
		}
	}
	printf("%d\t",c[k]);
	return 0;
}
