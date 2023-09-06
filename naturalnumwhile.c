//Write a C program to print all natural numbers in reverse (from n to 1). – using while loop

#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter the value os n");
	scanf("%d",&n);
	
	printf("number in reverse order:\n");
	while(n>=1)
	{
		
		printf("%d,",n);
		n--;
	}

	return 0;
}
