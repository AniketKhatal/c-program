//wap to check wheather a given number is prime ,armstrong or perfect using function:

#include<stdio.h>
int main()
{
	void isprime(int);
	void isarm(int);
	void isperfect(int);
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	isprime(num);
	isarm(num);
	isperfect(num);
	return 0;
}
void isprime(int x)
{
	int i,count=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
			//break;
		}
	}
	if(count==2)
	{
		printf("\nNumber is prime");
	}
	else
	{
		printf("\nNumber is Not Prime");
	}
}
void isarm(int x)
{
	int sum=0,rem,temp;
	temp=x;
	while(x>0)
	{
		rem=x%10;
		sum=sum+rem*rem*rem;
		x/=10;
	}
	if(sum==temp)
	{
		printf("\nNumber is Armstrong");
	}
	else
	{
		printf("\nNumber is not Armstrong");
	}
}
void isperfect(int x)
{
	int sum=0,i;
	int temp=x;
	for(i=1;i<x;i++)
	{
	if(x%i==0)
	{
		sum+=i;
	}
    }
    if(sum==temp)
    {
    	printf("\nNumber is perfect");
	}
	else
	{
		printf("\nNumber is not perfect");
	}
}
