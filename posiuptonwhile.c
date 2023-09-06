//print positive no upto n using while loop

#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,n;
	printf("enter the value of n :");
	scanf("%d",&n);
	printf("positive number upto %d",n);
	while(i<=n)
	{
		printf("\n%d",i);
		i++;
	}
	
	return 0;
}
