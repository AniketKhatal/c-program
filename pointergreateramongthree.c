//WAP to find the maximum number between 3 number using pointer:

#include<stdio.h>
int main()
{
	int a,b,c,*x,*y,*z;
	printf("Enter the 3 number :");
	scanf("%d%d%d",&a,&b,&c);
	x=&a;
	y=&b;
	z=&c;
	
	if(*x>*y && *x>*z)
	{
		printf("a is greater:%d",*x);
	}
	else if(*y > *x && *y > *z)
	{
		printf("b is greater:%d",*y);
	}
	else
	{
		printf("c is gre ater:%d",*z);
	}
	return 0;
}
