//wap in clang to define one function as int Findlengthstring(char ch[]) and return the lenght of given string;

#include<stdio.h>
#include<string.h>
int main()
{
	int Findlengthstring(char []);
	char ch[20];
	printf("Enter the string:");
	gets(ch);
	printf("\nThe length of the given String is :");
	int result=Findlengthstring(ch);
	printf("%d",result);
	return 0;
}
int Findlengthstring(char ch[])
{
	int count=0;
	while(ch[count]!='\0')
	{
		count++;
	}
	return count;
}
