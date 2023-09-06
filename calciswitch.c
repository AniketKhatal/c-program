//calculator using switch

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,ch;
	printf("1.addition,\n2.substraction,\n3.multiplication,\n4.division");
	printf("\nenter the a and b:");
	scanf("%d%d",&a,&b);
	printf("enter the choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("addition is :%d",a+b);
		break;
	case 2:
		printf("substraction is :%d",a-b);
		break;
	case 3:
		printf("multiplication is :%d",a*b);
		break;
	case 4:
		printf("division is :%d",a/b);
		break;
	default:
		printf("invalid input");
	}
	return 0;
}
