//write a program to enter the 5 values in ascending order and store 
//in array and find out the missing element from array;
//input = a[0]=1 ,a[1]=5 ,a[2]=9 ,a[3]=13 ,a[4]=17;

#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter the element into the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("the array is:\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nthe missing element is:\n");
	int j=0;
	for(i=0;i<5;i++)
	{
		for(j=a[i]+1;j<a[i+1];j++)
		{
			printf("%d ",j);
		}
	}
	return 0;
}
