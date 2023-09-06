//Program Name:prime number between ranges

#include<stdio.h>
int main()     //main function
{
	int i,s,e;
	printf("Enter the starting number:");
	scanf("%d",&s);
	printf("Enter the Ending number:");
	scanf("%d",&e);
	int num=s;
	for(i=s;i<=e;i++)
	{
		if(num%i==0)
		{
			printf("%d",num);
		}
		//num++;
	}
	return 0;
}







