// program 1:wap to check the number is prime or not:

#include<stdio.h>
int main()
{

int i,num,count;
printf("enter the number:");
scanf("%d",&num);
count=0;
while(num>0)
{
	for(i=1;i<=num;i++)
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
		printf("num is not prime");
	}
	return 0;
}
}
