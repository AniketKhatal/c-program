//Program Name: Write a program to count all occurence of char in a string;

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
	
//	char temp;
//	for(i=0;ch[i]!='\0';i++)
//	{
//		for(j=i+1;ch[j]!='\0';j++)
//		{
//			
//		if(ch[i]>ch[j])
//			{
//				temp=ch[i];
//				ch[i]=ch[j];
//				ch[i]=temp;
//			}
//		}
//	}
//	int count1;
//	printf("\nThe sorted string is:%s\n",ch);
	for(i=0;i<len;i++)
	{int count1=1;
		for(j=i+1;j<len;j++)
		{
		 
		if(ch[i]==ch[j])
		{
			count1++;
			ch[j]=0;
		
		}
	}
	
		if(ch[i]!=0)
		{
			printf("\nOccurence of %C----->%d",ch[i],count1);
			//count1=1;
	}
	}
	return 0;
}

