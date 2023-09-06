//string reverse program with using the function:

#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10];
	printf("Enter the string :");
	gets(ch);
	printf("\nBefore operation:%s",ch);
	strrev(ch);
	printf("\nAfter the operation:%s",ch);
	return 0;
}
