//wap in c lang to search the specific given word in a string using function:
//Algorithm:
//declarre two string array ch,ch1 take input
//initial the 3 counter for ch,ch1,no of occurence
//calulate the len of ch2
//
#include<stdio.h>
#include<string.h>
char ch[20],ch1[5];
int count=0;
int main()
{
	void searchword(char[]);
	
	printf("Enter the string:");
	gets(ch);
	printf("%s",ch);
	printf("\nEnter the Word that you want to search:");
	gets(ch1);
	
	searchword(ch);
}
void searchword(char ch[])
{
	while(ch[count]!='\0')
	{
	if(ch1[count]==ch[count])
	{
		printf("\nThe given Word is Present in the String");
	}	
	else
	{
		printf("\nWord is not Present");
	}
	count++;
}
}

