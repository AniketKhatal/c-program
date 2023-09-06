//Write a C program to print all even numbers between 1 to 100. – using while loop

#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0;
	while(i<=100)
	{
		if(i%2==0)
		{
				printf("even\n%d\n",i);	
		}
		else
		{
				printf("odd\n%d\n",i);
		}
		i++;
	}
	return 0;
}
