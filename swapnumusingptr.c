// wacp to swap to numbers using pointer;

#include<stdio.h>
int main()
{
	int x,y,temp;
	int *a,*b;
	printf("enter the value of x and y:");
	scanf("%d%d",&x,&y);
	
	a=&x;
	b=&y;
	
	printf("before swapping: x=%d  y=%d  ",x,y);
	
	temp=*a;
	*a=*b;
	*b=temp;
	
	printf("\nafter swapping: x=%d y=%d",*a,*b);
	return 0;
}
