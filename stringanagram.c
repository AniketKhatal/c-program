//Program Name:Wap to check the given string is anagram or not;

#include<stdio.h>
int main()
{
	char str1[10],str2[10],i=0,j=0,count=1,count1=0,flag=0;
	printf("Enter the String:");//i/p of str1
	gets(str1);
	printf("\nEnter the string into str2:");//i/p of str2
	gets(str2);
	while(str1[count]!='\0')//count len of str1
	{
		count++;
	}
	printf("\nstr1=%d",count);
	while(str2[count1]!='\0')//counut len of str2
	{
		count1++;
	}
	printf("\nstr2=%d",count1);
	
	if(count==count1)//check the lenght of both string
	{
		for(i=0;i<count;i++)
		{
			for(j=i+1;j<count;j++)
			{
				if(str1[i]>str1[j])//sorting of str1
					{
						char ch;
						ch=str1[i];
						str1[i]=str1[j];
						str1[j]=ch;
					}
			}
		}
		for(i=0;i<count1;i++)
		{
			for(j=i+1;j<count1;j++)
			{
				if(str2[i]>str2[j])//sorting of str2
					{
						char ch;
						ch=str2[i];
						str2[i]=str2[j];
						str2[j]=ch;
					}
			}
		}
		printf("\nThe str1 sort :%s\n",str1);
		printf("The str2 sort :%s\n",str2);
		
		for(i=0;i<count;i++)//logic to check the anagram
		{
			if(str1[i]==str2[i])
			{
				flag=1;
				break;				
			}
		}
		if(flag)
		{
			printf("\nAnagram");
		}
		else
		{
			printf("\nNot Anagram");
		}
		
	}
else
{
	printf("\nBoth String lenght are not equal");
}
	return 0;
}

