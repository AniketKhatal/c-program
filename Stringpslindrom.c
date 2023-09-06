//String palindrome:

#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10],ch1[10],temp1[20];
	printf("Enter the string:");
	gets(ch);
	strcpy(temp1,ch);
	//ch1=ch;
	int count=0;
	while(ch[count]!=0)
	{
		count++;
	}
	int len=count;
	int mid,end,start;
	printf("\nThe lenght of the string:%d",len);
	mid=len/2;
	end=len-1;
	for(start=0;start<end;start++)
	{
		char temp=ch[start];
		ch[start]=ch[end];
		ch[end]=temp;
		end--;		
	}
	printf("\nThe rev string:%s",ch);
	strcpy(ch1,ch);
	printf("\nch1:%s",ch1);
	if(ch1==temp1)//palindrome
	{
		printf("\nString is palindrome");
	}
	else
	{
		printf("\nNot palindrome");
	}
//	int flag=0;
//	for(int i=0;i<len;i++)
//	{
//		if(ch1[i]==ch1[len-i-1])
//		{
//			flag=1;
//			break;
//		}
//	}
//	if(flag)
//	{
//		printf("\nString is palindrome");
//	}
//	else
//	{
//		printf("\nString is not palindrome");
//	}
	return 0;
}
