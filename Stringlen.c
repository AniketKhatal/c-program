//Calculate the string lenght 
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20];
	int count=0;
	printf("Enter the string :");
	gets(ch);
	while(ch[count]!='\0')
	{
		count++;
	}
	int a=count;
	printf("\nThe lenght:%d",a);
	return 0;
}
