//program to check the number is prime or not

#include<stdio.h>
int main()
{
	int i,count=0,num;
	printf("enter the number :");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
			
		}
	}
		if(count==2)
		{
			printf("number is prime");
		}
		else
		{
			printf("not prime");
		}
	
	return 0;
}
