//Program Name:faboncci series using the recursion;

#include<stdio.h>
int fibo(int num)//function declartion with its defination
{
	if(num==0)
		return 0;
	else
		if(num==1)
			return 1;
		else
			return fibo(num-1)+fibo(num-2);//recursive call
}
int main()//Main function;
{
	int i,	n,f;
	printf("Enter the number upto u which print the fibonacci series:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		f=fibo(i);
		printf("%d\t",f);
	}
}

