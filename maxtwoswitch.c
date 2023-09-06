//find max between two using switchcase

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,ch;
	printf("enter the number :");
	scanf("%d%d",&a,&b);
	printf("enter the choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			if(a>b)
			{
				printf("a is greater");
			}
			else if(b>a)
			{
				printf("b is greater");
			}
			else
			{
				printf("");
			}
		break;
		case 2:
			if(a>b)
			{
				printf("b is small");
			}
			else if(b>a)
			{
				printf("a is small");
			}
			else
			{
				printf("");
			}
			break;
			default:
				printf("invalid input");
			
	}
	
	return 0;
}
