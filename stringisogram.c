//Program Name:Wap to check whether string is isogram or not isogram;

#include<stdio.h>
int main()
{
	char str[10],i,j=0,count=0;
	printf("Enter the string:");
	gets(str);
	while(str[count]!='\0')
	{
		count++;
	}
	printf("%d",count);
	int flag=0;
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
		if(str[i]==str[j])
		{
			flag=1;
			break;
		}
	}
	}
	if(flag)
	{
		printf("\nNot isogram");
	}
	else
	{
		printf("\n Isogram");
	}
	return 0;
}

