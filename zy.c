//wap to enter the five element in array and reverse it;
//input = a[0]=10, a[1]=20 ,a[2]=30 ,a[3]=40 ,a[4]=50;

#include<stdio.h>
int main()
{
	int a[5],i,j,len;
	printf("enter the element into the array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array is :\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	len=sizeof(a)/sizeof(a[0]);
	printf("\nthe lenght of the given array:%d",len);
	printf("\nthe reverse of the array:\n");
	for(i=5;i<0;i--)
	{
		printf("%d",i);
	}
	return 0;
}
