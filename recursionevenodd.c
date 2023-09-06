//wap to check whether a number is even or odd using function:

#include<stdio.h>
int main()
{
	void evenodd(int);
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	evenodd(num);
	return 0;
}
void evenodd(int x)
{
	int res;
	if(x%2==0)
	{
		printf("\nNumber is even");
	}
	else
	{
		printf("\nNumber is odd ");
	}
}
