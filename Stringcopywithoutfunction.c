//copy string from one to another:

#include<stdio.h>
int main()
{
	char str1[10],str2[10];
	int count=0;
	printf("enter the string:");
	gets(str1);
	printf("str1:%s",str1);
	while(str1[count]!='\0')
	{
		str2[count]=str1[count];
		count++;
	}
	printf("\nThe copied string in str2 is :%s",str1);
}
