//Program Name:Wap to count the white spaces in the given array;

#include<stdio.h>
int main()
{
	char str[20],i,j;
	printf("Enter the string:");// input
	gets(str);
	printf("\nThe string is:%s\n",str);
	int count=0,len,count1=0;
	while(str[count]!='\0')//count the length
	{
		count++;	
	}	
	len=count;
	printf("\nThe lenght of the given string:%d",len);
	
	for(i=0;i<len;i++)//count the white space;
	{
		
		if(str[i]==' ')
		{
			count1++;
		}
	}
	printf("\nTHe white spaces bet string is:%d",count1);
	
	return 0;
}

