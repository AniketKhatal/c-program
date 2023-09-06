//Program Name:Check the number is string number;

#include<stdio.h>
int main()
{
	int num,sum=0,i,rem,temp;
	printf("Enter the number :");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		int rem=0,fact=1;
		rem=num%10;
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==temp)
	{
		printf("number is strong number");
	}
	else
	{
		printf("number is not strong");
	}
}
