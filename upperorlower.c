//check weather char is uppercase of lower case

#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	printf("enter the char :");
	scanf("%c",&ch);
	printf("\n the ascii value of char:%d",ch);
	(ch>=65&&ch<=90)?printf("\nthe char in upper case"):
		printf("\n char in lower  case");
	return 0;
	
	
}
