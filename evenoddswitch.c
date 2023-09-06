//even or odd using switch

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
			if(a%2==0)
			{
				printf("a is even");
			}
			else if(b%2==0)
			{
			 	printf("b is even");	
			}
			else
			{
				printf("");
			}
			break;
		case 2:
			if(a%2!=0 )
			{
				printf("a is odd");
			}
			else if(b%2!=0)
			{
				printf("b is odd");
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
