//wap to check a char is character or digit or spcial char

#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	
	printf("enter the char:\n");
	scanf("%c",&ch);
	
	if(ch>='a'&&ch<='z' || ch>=97&&ch<=122)
	{
		printf("it is a char");
	}
	else if(ch>=48 || ch<=57)
	{
		printf("it is a digit");
	}
	else
	{
		printf("it is a special char");
	}
	return 0;
}
