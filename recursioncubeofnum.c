//wap to find cube of any number using fumction

#include<stdio.h>
double cube(double num);
int main()
{
	int num;
	double c;
	printf("Enter the number:");
	scanf("%d",&num);
	c=cube(num);
	printf("The Cube of %d number is :%f",num,c);
	return 0;
}
double cube(double num)
{
	double c=num*num*num;
	return c;
}

