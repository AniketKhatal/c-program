//WAP in c to add, substract, multiply and divide two number using pointer:

#include<stdio.h>
int main()
{
	int ch,a,b,*x,*y,add,sub,mul,div;
	x=&a;
	y=&b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf(" 1.Add\n 2.Substract\n 3.Multiply\n 4.Devide\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			add=*x+*y;
			printf("The addition of two number:%d",add);
		break;
		
		case 2:
			sub=*x-*y;
			printf("The substarction of two number:%d",sub);
		break;
		
		case 3:
			mul=*x * *y;
			printf("The multiplicaton of two number:%d",mul);
		break;
		
		case 4:
			div=*x / *y;
			printf("The dividation of two number:%d",div);
		break;
		
		default:
			printf("Invalid choice");
	}
	return 0;
}
