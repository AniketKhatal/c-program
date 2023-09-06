	//wap to count vowel and consonent in string using pointer:

#include<stdio.h>
int main()
{
	char i,a[6],*x;
	int vc=0,cc=0;
	printf("enter the char into array:");
	//gets(a);
	scanf("%s",&a[i]);
	
	x=a;
	while(*x!='\0')//to check the end of the string
	{
		if(*x=='a'||*x=='e'||*x=='i'||*x=='o'||*x=='u')
		{
		vc++;
		}
		else{
			cc++;
		}
		x++;
	}
	printf("Vowel Is:%d",vc);
	printf("Consonent Is:%d",cc);
	return 0;
}
