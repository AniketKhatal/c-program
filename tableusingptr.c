//Display the table of a number using pointer:

#include<stdio.h>
int main()
{
	int a,i=0;
	int *x;
	printf("enter the number that u want to print the table:");
	scanf("%d",&a);
	
	x=&a;
	printf("the table of the number %d\n",*x);
	for(i=1;i<=10;i++)
	{
		//table=i*(*x);
		printf("%d\n",i*(*x));
	}
	return 0;
}
