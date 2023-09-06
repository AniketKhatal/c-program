//wap in c lang to find count a vowel and consonent ;

#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20],*x;
	printf("Enter the string:");
	gets(ch);
	int vc=0,cc=0,count=0;
	while(ch[count]!='\0')
	{
		if(ch[count]>='a' && ch[count]<='z')
		{
			ch[count]=ch[count]-32;
		}
		count++;
	}
	printf("\nThe String is:%s",ch);
	x=ch;
	while(*x!='\0')
	{
		if(*x=='A'||*x=='E'||*x=='I'||*x=='O'||*x=='U')
		{
			vc++;
		}
		else
		{
			cc++;
		}
		x++;
	}
	printf("\nThe count of vowel is:%d",vc);
	printf("\nThe count of consonent is:%d",cc);
}
