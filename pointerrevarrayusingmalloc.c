//wap to reverse array 
//take array using malloc 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,*ptr,i,mid,end,temp;
	printf("enter the size of array block:");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nenter the value into the array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("\nArray with value:");
	for(i=0;i<size;i++)
	{
		printf("%d ",ptr[i]);
	}
	printf("\nreverse the array:");
	mid=size/2;
	end=size-1;
	for(i=0;i<mid;i++) 
	{
		temp=ptr[i];
		ptr[i]=ptr[end];
		ptr[end]=temp;
		end--;
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",ptr[i]);
	}
}
