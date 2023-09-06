//wap to swap two arrays using pointer;

#include<stdio.h>
int main()
{
	int a[5],b[5],*x,*y,i;
	x=a;
	y=b;
	printf("enter the value into the a array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the element into b array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
//	printf("\narray before swapping:");
//	printf("\narray a:\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d",*x);//a[i]
//		*x++;
//	}
//	printf("\narray b:\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d\t",*y);//b[i]
//		*y++;
//	}
	printf("\nnow! we swap the array:\n");
	for(i=0;i<5;i++)
	{
		*x= *x + *y;
		*y= *x - *y;
		*x= *x - *y;
		*x++;
		*y++;
	}
	for(i=0;i<5;i++)
	{
	printf("\n%d %d",a[i],b[i]);
	}
	return 0;
}
