// wap to find the factorial of number:

#include<stdio.h>
int main()
{
	int a,i,*x,fact=1;
	printf("enter the number :");
	scanf("%d",&a);
	x=&a;
	for(i=*x;i>=1;i--)
	{
		fact=fact *i;
	}
	printf("factorial of number %d is %d",*x,fact);
	return 0;
}
