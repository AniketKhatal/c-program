//Program Name:Leap year or not

#include<stdio.h>
int main()     //main function
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%4==0 &&((year%400==0)||(year%100!=0)))
	{
		printf("\nThe year is leap year");
	}
	else
	{
		printf("\nNot leap year");
	}
	return 0;
}

