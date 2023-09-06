//Program Name:stronng number chaeck;

#include<stdio.h>
int main()
{
	int num,temp,i,sum=0;
	printf("Enter the number:");
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
	if(sum==temp)//
		printf("strong");
	else
		printf("not strong");
	return 0;
}
