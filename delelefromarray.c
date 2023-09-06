//WAP to input 5 values in array and delete value from specified index and move 
//Value back side of index
//algorithm:
//1)declare aray size with 5
//2)print the array
//3)accept index where u want to delete the element
//3)delete that percular index value and also reduce the size of array 
//4)print the array

#include<stdio.h>
int main()
{
	int a[10],i,index,n;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the element into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the index where u want to delete the element:");
	scanf("%d",&index);
	for(i=index;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("the array after the deleting the element:\n");
	for(i=0;i<n-1;i++)
	{
		printf("a[%d]---->%d\n",i,a[i]);
	}
	return 0;
}
