//wap to add two number using pointer

#include<stdio.h>
int main()
{
	int a,b,*x,*y,ch,c,z;
	printf("enter the value a and b");
	scanf("%d%d",&a,&b);
	x=&a;
	y=&b;
	printf("pls enter the choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			//int c;
			c=*x + *y;
			printf("the sum of two number:%",c);
		break;
		case 2:
			*x=*x + *y;
			*y=*x - *y;
			*x=*x - *y;
			printf("the swap value of a and b :%d %d",*x,*y);
		break;
		case 3:
		printf("enter the value of z : that are override on a:");
		//int z;
		scanf("%d",&z);
		a=z;
		printf("After the change the value of a is:%d",*x);
		break;
		case 4:
			if(*x > *y)
			{
				printf
				("a=%d is greater ",*x);
			}
			else
			{
				printf("b=%d is greater",*y);
			}
		break;
	}
}
