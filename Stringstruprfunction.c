//string program to convrt to upper case with the using function:

#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10];
	printf("Enter the string:");
	gets(ch);
	printf("\nBefore operation:%s",ch);
	strupr(ch);
	printf("\nAfter the operaton:%s",ch);
	return 0;
}
