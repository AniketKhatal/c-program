#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,*ptr,i;
	printf("enter the size:");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int*)*size);
	printf("enter the element into array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("display the block:");
	for(i=0;i<size;i++)
	{
		printf("%d",ptr[i]);
	}
}
