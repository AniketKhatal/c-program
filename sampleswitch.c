//switch case:
#include<stdio.h>
#include<conio.h>
int main()
{
	int choice;
	printf("enter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :
			printf("your choice is %d",choice);
			break;
		case 2:
			printf("your choice is %d",choice);
			break;
		case 3:
			printf("your choice is %d",choice);
			break;
		default:
			printf("you enter the wrong choice");
			break;
	}
	
	return 0;

}
