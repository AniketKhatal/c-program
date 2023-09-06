////print 'A' to 'Z' using while loop in reverse order:

#include<stdio.h>
#include<conio.h>
int main()
{
	char i='Z';
	while(i>='A')
	{
		printf("\n%c",i);
		i--;
	}
}
