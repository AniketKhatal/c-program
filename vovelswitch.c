//vovelswitch

#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter the char :");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
	}
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("vowel");
		break;
		default:
			printf("consonent");
	}
	
	return 0;
}
