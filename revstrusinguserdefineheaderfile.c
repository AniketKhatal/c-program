//Program Name:revesrse the string using the user define header;

#include<stdio.h>
#include<anikstr.h>
int main()
{
	char ch[20];
	int choice;
	printf("Enter the String:");
	gets(ch);
	printf("1.Reverse String\n2.To Check Palindrome or not");
	printf("\nEnter your choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			revstr(ch);
			printf("\nThe reverse string is:%s",ch);
		break;
		case 2:
			palinstr(ch);
		break;
	}
	return 0;
}
