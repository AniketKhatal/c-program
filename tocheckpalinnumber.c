//to check the palindrome number or not& rev num& suum of digit&cal no of digit

#include<stdio.h>
int main()
{
	int num,temp,rem,rev=0,sum=0,count=0;
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
	printf("the digit is :%d",count);
	printf("\nthe reverse number is:%d",rev);
	printf("\n the sum of digit:%d",sum);
	
	if(rev==temp)
	{
		printf("\n it is the palindrom number");
	}
	else
	{
		printf("\n not palindrome");
	}
	return 0;
}
