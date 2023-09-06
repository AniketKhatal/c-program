//program for strong number:

#include<stdio.h>
int main()
{
	int  i,n,rem,fact=1,sum=0,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		fact=1;
		for(i=rem;i>=1;i--)
		{
			fact =fact*i;
		}
		sum=sum+fact;
		n=n/10;
		
	}
//	temp=num;
//	while(num>0)
//	{
//		rem=num%10;
//		fact=1;
//		for(i=rem;i>=1;i--)
//		{
//			fact=fact*i;
//		}
//		sum=sum+fact;
//		num=num/10;
//	}
	if(sum=temp)
	{
		printf("strong number");
	}
	else
	{
		printf("not strong");
	}
	return 0;
}
