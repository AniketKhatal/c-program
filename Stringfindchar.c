//find the perticular char in givern string:

#include<stdio.h>
int main()
{
	char str[10],ch;
	int i=0,flag=0;
	printf("Enter the string:");
	gets(str);
	printf("Enter the char that u want to seach:");
	scanf("%c",&ch);
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			flag=1;	
			break;
		}
		i++;	
	}
	if(flag)
	{
		printf("\nChar found");
	}
	else
	{
		printf("\nNot found");
	}
	return 0;
}
