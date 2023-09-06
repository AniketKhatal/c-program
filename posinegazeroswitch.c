//positive,negative,zero using switch


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
			if(a>0 ||b>0)
			{
				printf("both is positive");
			}
//			else if(b>0)
//			{
//			 	printf("b is positive");	
//			}
//			else
//			{
//				printf("");
//			}
			break;
		case 2:
			if(a<0 ||b<0 )
			{
				printf("both is negative");
			}
//			else if(b<0)
//			{
//				printf("b is negative");
//			}
//			else
//			{
//				printf("");
//			}
			break;
		case 3:
			if(a==0 ||b==0 )
			{
				printf("a is zero");
			}
//			else if(b==0)
//			{
//				printf("b is zero");
//			}
//			else
//			{
//				printf("");
//			}
			break;
			
		default:
			printf("invalid input");
	}
	return 0;
}
