//Program Name: Add one space after each char of string;

#include<stdio.h>
int main()
{
	char ch[10];
	int i;
	printf("Enter the string:");
	gets(ch);
	for(i=0;ch[i]='\0';i++)
	{
		printf("%s",ch[i]);
//		printf("_");
	}
	printf("%s", ch);
}
