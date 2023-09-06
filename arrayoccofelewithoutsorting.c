//element occurence of array:

#include<stdio.h>
int main()
{
	int a[6],b[7],count=1,i,j;
	printf("Enter the element into the array:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe array is:\n");
	for(i=0;i<6;i++)
	{
		printf(" %d ",a[i]);
	}
	for(i=0;i<6;i++)
	{
		count=1;
		for(j=i+1;j<6;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]=-1;
			}
		}
		b[i]=count;
	}
	printf("\nThe occurence of the ele of the array:\n");
	for(i=0;i<6;i++)
	{
		if(a[i]!=-1)
		{
			printf("\na[%d]---->b[%d]",a[i],b[i]);
		}
	}
	return 0;
}

