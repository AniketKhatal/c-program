//wap to reverse array using pointer;

#include<stdio.h>
int main()
{
	int a[5],i,*x;
	printf("enter the value into the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	x=a;
	printf("\nreverse the array:");
	
	for(x=a+4;x>=a;x--)
	{
		printf("%d\t",*x);
	}
	return 0;
}
