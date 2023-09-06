//find the perticular word in string
//word occurance
//is there any palindrome word
//count the vowel count;

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],s[100];
	int flag=0,j=0;
	printf("Enter The String \n");
	gets(str);
	
	printf("ENter The Search String \n");
	gets(s);
	int slen=strlen(s);
	int len = strlen(str);
	for(int i=0;i<len;i++)
	{
		int k=0;
		j=0;
		
	
		if(str[i]==32)
		{
			i=i+1;
			
		}
		else{
			char a[100];
			while(j<i)
			{
				a[k]=str[j];
				if(strcmp(a,s)==0)
				{
					printf("hi\n");
				}
				else{
					printf("hello\n");
					
				}
				k++;
				j++;
			}
			
			printf(" a is %s\n",a);
			
		}
	}
	
	
}
