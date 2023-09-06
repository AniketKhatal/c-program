//find the perticular word in string
//word occurance
//is there any palindrome word
//count the vowel count;

#include<stdio.h>
int main()
{
	int i,j,k,f=0,b=0;
	char str[]="Good Morning India";
	char s[]="India";
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==s[0])
		{
			k=i;
			for(j=0;j<strlen(s);j++,k++)
			{
				if(str[k]!=s[j])
				{
					f=0;
					break;
				}
				f=1;
			}
			
			if(j==strlen(s)&&f==1&&str[k]==s[strlen(s)]
			{
				printf("%d",j);
				b=1;
				break;
			}
		}
		
		
	}
	if(b)
		{
			printf("String is Found");
		}
		else{
			printf("String is not found");
		}
	
}
