//wap to find smallest number in array using pointer;

#include<stdio.h>
int main()
{
	int a[5],i,*small;
	printf("enter the value in the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a;
	printf("the array is :");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
		//small++;
	}
	for(i=0;i<5;i++)
	{
		if(*(a+i)  < *small)// large just >
		{
			*small = *(a+i);
		}
	//	if(*(a+i)>*small)
	}
	printf("\nthe smallest number in array using pointer:%d",*small);
	
}
