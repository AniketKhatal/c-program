//program 5:check the given number is palindrome or not
//i/p=3427=number is not palindrome
//i/p=12621 o/p=number is palindrome

#include<stdio.h>
int main()
{
	int num,rem,temp,i;
	printf("enter the number :");
	scanf("%d",&num);
	temp=num;
	while(i>0)
	{
		
		rem=num%10;
		num=num/10;
		i++;
	}
	printf("%d%d",rem,num);
	return 0;
}
