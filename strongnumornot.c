	//To check the number is strong or not:

#include<stdio.h>
int main()
{
	int i,num,rem,fact=1,sum=0,temp;
	printf("enter the number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		fact=1;
		for(i=rem;i>=1;i--)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==temp)
	{
		printf("number is strng num");
	}
	else
	{
		printf(" not strong number");
	}
	return 0;
}
