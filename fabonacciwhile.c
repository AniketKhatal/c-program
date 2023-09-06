//Program Name:  fabonacci series;

#include<stdio.h>
int main()     //main function
{
	int a=0,b=1,c,n;
	printf("Enter the number that you want to print:");
	scanf("%d",&n);
	int count=2;
	printf("%d\n",a);
	while(count<=n)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		count++;
	}
	return 0;
}

