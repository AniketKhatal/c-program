//Program Name:greatest among three number

#include<stdio.h>
int main()     //main function

{
	int a,b,c;
	printf("Enter the Threee number:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("\nA is greater");
	}
	else if(b>a&&b>c)
	{
		printf("\nB is greater");
	}
	else
	{
		printf("\nC is greater");
	}
	return 0;
}

