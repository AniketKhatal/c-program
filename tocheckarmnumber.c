//to check the palindrome number or not

#include<stdio.h>
int main()
{
	int num,temp,rem,rev=0,sum=0,count=1;
	printf("enter the number that you want to check:");
	scanf("%d",&num);
	temp==num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		count++;
		sum=sum+rem;
		rev=rev*10+rem;
	}
	printf("the reverse number is:%d",rev);
	printf("\n the sum of digit:%d",sum);
	
	if(temp==rev)
	{
		printf("\n it is the palindrom number");
	}
	else
	{
		printf("\n not palindrome");
	}
	return 0;
}
