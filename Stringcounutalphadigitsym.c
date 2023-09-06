//wap in c lang to count the alphabhet,digit,special symbol in given string using function;

#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10];
	void cc(char[]);
	printf("Enter the string:");
	gets(ch);
	printf(" %s",ch);
	cc(ch);

}
void cc(char ch[])
{
	int ca=0,cd=0,cs=0,count=0;
	while(ch[count]!='\0')
	{
		if((ch[count]>=65 &&ch[count]<=90) || (ch[count]>=97 &&ch[count]<=122))
		{
			ca++;
		}
		else if(ch[count]>=48 &&ch[count]<=57)
		{
			cd++;
		}
		else
		{
			cs++;		
		}
		count++;
	}
	printf("\nThe count of alpha:%d",ca);
	printf("\nThe couunt of digit:%d",cd);
	printf("\nThe count of special count:%d",cs);

}
