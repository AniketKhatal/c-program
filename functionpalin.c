//check number is palindrome or not using fumction;

#include<stdio.h>
int main()
{
	void palin(int);
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	palin(num);
	return 0;
}
void palin(int a)
{
	int rem=0,r;
	int temp=a;
	while(a!=0)
	{
		rem=a%10;
		a=a/10;
		r=r*10+rem;
	}
	printf("\nrev number is:%d",r);
	if(r==temp)
	{
		printf("\nnumber is palindrome");
	}
	else
	{
		printf("\nnumber is not palindrome");
	}
}
