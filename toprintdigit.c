//tp print the digit of that number:

#include<stdio.h>
int main()
{
 
	int num, rem;
	printf("enter the number:");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		printf("%d,",rem);
		num=num/10;
		
	}
	return 0;
}
