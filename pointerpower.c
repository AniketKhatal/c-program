//wap to find the power of any number using pointer:

#include<stdio.h>
int main()
{
	int a,b,i=1,*x,*y,num=1;
	printf("enter the number and its power:");
	scanf("%d%d",&a,&b);
	x=&a;
	y=&b;
	while(i<=*y)
	{
		num=num* (*x);
		i++;
	}
	printf("the number %d  ,its power WRT  %d is :%d",*x,*y,num);
	return 0;
}
