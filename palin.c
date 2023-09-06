//Program Name:Palindrome or not;

#include<stdio.h>
int main()     //main function
{
	int num,rem,rev;
	printf("Enter the number:");
	scanf("%d",&num);
	int temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==temp)
		printf("Num is palin");
	else
		printf("not palin");
	return 0;
}

