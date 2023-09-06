//Program Name: Write a program to count all occurence of char in a string;
//algo;
//i/p
//cal lenght
//sort
//occu logic(ch[i]==ch[i+1])count++;
#include<stdio.h>
int main()
{
	char ch[20],i,j,count=0,len;
	printf("Enter the string:");
	gets(ch);
	
	while(ch[count]!='\0')
	{
		count++;
	}
	len=count;
	printf("\n%d",len);
	
	char temp;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			
		if(ch[i]>ch[j])
			{
				temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
			}
		}
	}
//	for(i=0;i<len;i++)
//	{
//		printf("%c",ch[i]);
//	}
	printf("\nThe sorted string is:%s\n",ch);
	for(i=0;i<len;i++)
	{
		if(ch[i]==ch[i+1])
		{
			count++;
		}
		else
		{
			printf("\n occurence of %c---->%d",ch[i],count);
			count=1;
		}
 }
	return 0;
}

