//progrm of to check the factorial of a number

#include<stdio.h>
int main()
{
	int num,i=1,fact;
	printf("enter the number :");
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		//printf("\n%d",);
		i++;
	}
	printf("\n%d",fact);
	return 0;
}
