//print the sum of digit of number:

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a,sum;
	printf("enter the number :");
	scanf("%d",&num);
	while(num>0)
	{
		a=num%10;
		sum=sum+a;
		num=num/10;
	}
	printf("the sum of digit id:%d",sum);
	return 0;	
}

