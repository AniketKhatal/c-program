//Program Name:Write a program to kth smallest element from an array

#include<stdio.h>
int main()     //main function
{
	int a[5],b[10],i,j,num,small;
	printf("Enter the elemet into the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The element of the array:");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
//	printf("\nEnter the kth smallest element upto 5:");
//	scanf("%d",&num);
	small=a[0];
	for(i=0;i<5;i++)
	{
		if(small>a[i])
		{
			small=a[i];
		}
	}
	printf("\nThe smallest number in array is:%d",small);
//	printf("sort the array:")
	int temp=0;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
			else if(a[i]==a[j])
			{
				a[j]=-1;
			}
		}
	}
	printf("\nThe sorted array is:");

	for(i=0;i<5;i++)
	{
		if(a[i]!=-1)
		{
				printf("%d",a[i]);
		}
	
	}
//	for(i=0;i<len;i++)
//	{
//		printf("%d",b[i]);	
//	}
	
	int len,num1;
//	len=sizeof(b)/sizeof(b[0]);
//	printf("\nThe size of array after the operation:%d",len);
	
	
	
	printf("\nEnter the kth smallest element:");
	scanf("%d",&num1);
	//a[i]=num1;
	for(i=0;i<=5;i++)
	{
		if(num1==a[i])
		printf("%d",a[i]);
	}


	return 0;
}

