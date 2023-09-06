//dynamic array using malloc function of pointer:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,*ptr,size,i;
	printf("enter the size:");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("enter the value in array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("\ndisplay the value:\n");
	for(i=0;i<size;i++)
	{
		printf("%d",ptr[i]);
	}
}
