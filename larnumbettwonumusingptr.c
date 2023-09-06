//find the largest number among two number using ptr;

#include<stdio.h>
int main()
{
	int a,b;
	int *x,*y;
	printf("enter the value of A=");
	scanf("%d",&a);
	printf("Enter the secound no B=:");
	scanf("%d",&b);
	
	x=&a;
	y=&b;

	if((*x)>(*y))
	{
		printf("a is greater :%d",*x);
	}
	else
	{
		printf("b is greater :%d",*y);
	}
	
	return 0;
}
