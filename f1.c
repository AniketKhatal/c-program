//factorial number

#include<stdio.h>
int main()
{
	int num,fact;
	int i=1;
	printf("enter the number:");
	scanf("%d",num);
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("\nthe factorial of the number:%d",fact);
	return 0;
}
