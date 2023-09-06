//String copy program using strcopy(char[],char[]);

#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10];
	char ch1[10];
	printf("enter the string first:");
	gets(ch);
	printf("\nEnter the second string:");
	gets(ch1);
	printf("\nBefore operation:");
	printf("\n1st string:%s",ch);
	printf("\n2nd string:%s",ch1);
	printf("\nAfter the Operation:");
	strcpy(ch,ch1);
	printf("\nAfter the operation");
	printf("\n:%s",ch);
//	printf("\n:%s",ch1);
	return 0;
}
