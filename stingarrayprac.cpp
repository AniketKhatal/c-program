//Program Name:print only char

#include<iostream>
using namespace std;
char *removespechar(char msg[])
{
	int count=0;
	while(msg[count]!=0)
	{
		count++;
	}
	cout<<"The length of the string is:"<<count;
	char *str1=new char[count+1];
	int j=0;
	for(int i=0;i<count;i++)
	{
		if(msg[i]==' ')
		{
			msg[i+1];
		}
		if(msg[i]>='a' && msg[i]<='z' || msg[i]>='A' && msg[i]<='Z')
		{
			str1[j]=msg[i];
			j++;
		}
	}
	return str1;
}
int main()     //main function
{
	char str[50],*msg;
	cout<<"Enter the string:";
	gets(str);
	msg=removespechar(str);
	cout<<"The string only with char:"<<msg;
	return 0;
}

