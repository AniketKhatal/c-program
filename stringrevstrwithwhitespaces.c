//Program Name:reverse the word after the white spaces;
//i/p hello ak
//o/p olleh ka

#include<stdio.h>
int main()
{	char ch[10];
	printf("Enter the string:");
	gets(ch);
	int i,j,count=0,end,mid;

	while(ch[count]!='\0')
	{
		count++;
	}
	printf("\nThe lenght of the string:%d",count);

	
	printf("\nThe reverse string is:%s\n",ch);
	return 0;
}



