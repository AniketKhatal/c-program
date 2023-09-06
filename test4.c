//progarm 4:wap to check if enter char is alphabet or digit or spacial symbol;

#include<stdio.h>
int main()
{
	char ch;
	printf("enter the char:");
	scanf("%c",&ch);
	printf("%d",ch);
	if(ch>=65 && ch<=122)
	{
		printf("\nits a character");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\nits a digit");
	}
	else
	{
		printf("\nits a special symbol ");
	}
	return 0;
	
}

//here we also use the switch case to check it ;
