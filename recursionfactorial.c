//Program Name:factorial number using the recursion;

#include<stdio.h>
int fact(int num)
{
	if(num==0 || num==1)
	{
		return 1;
	}
	else
	{
			return num*fact(num-1);//recursive call
	}
	return 0;
}

int main()
{
	int n,z;
	printf("Enter the number:");
	scanf("%d",&n);
	z=fact(n);
	printf("The factorial of the number using the recursion:%d",z);
}
