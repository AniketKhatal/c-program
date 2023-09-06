//array

#include<stdio.h>
int main()
{
	int a[6],b[6],i,j,count;
	printf("enter the element into array:");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe array is:\n");
	for(i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nthe duplicate element inthe array:");
	for(i=0;i<6;i++)
	{
		count=1;
		for(j=i+1;j<6;j++)
		{
			if(a[i]=a[j])
			{
				count++;
				a[j]=-1;
			}
		}
		b[i]=count;
	}
	printf("\nthe duplication of number:\n");
	for(i=0;i<6;i++)
	{
		if(a[i]!=-1)
		{
			printf("a[%d]--->b[%d]",a[i],b[i]);
		}
	}
}
