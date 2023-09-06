//Program Name:Caeser cipher algo in string;
//i/p the array and the key;
//show
//logic for it
//show
#include<stdio.h>
int main()
{
	char ch[90],i,key,count=0;
	printf("Enter the string :");
	gets(ch);
	while(ch[count]!='\0')
	{
		count++;
	}
	printf("\nThe lenght of str:%d",count);
	printf("\nEnter the key:");
	scanf("%d",&key);

	for(i=0;i<count;i++)
	{
		
		if(ch[i]=' ')
		{
			continue;
		}
		else if(ch[i]>='a' && ch[i]<='z')
		{printf("hi");
			if(ch[i]+key > 'z')
			{
				ch[i]=ch[i]+key-26;
			}
			else
			{
			ch[i]=ch[i]+key;
			}
		}
	}
	printf("%s",ch);
	return 0;
}

