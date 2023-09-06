//seperate the digit

#include<stdio.h>
int main()
{
	int num,rem;
	printf("enter the number :");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		printf("%d\n",rem);
		num=num/10;
	}
	
	return 0;
}
