//WAP to input string from keyboard and convert from lower case string to upper case without using strupr() function

#include<stdio.h>
#include<stdio.h>
int main()
{
	char ch[10];
	printf("Enter the string:");
	gets(ch);
	int count=0;
	while(ch[count]!='\0')
	{
		if(ch[count]>='a' && ch[count]<='z')
		{
			ch[count]=ch[count]-32;
		}
		count++;
	}
	//ch[count]='\0';
	printf("\nThe string after operation:%s.",ch);
	return 0;
}

