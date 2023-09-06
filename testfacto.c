//programe 7: for fctorial number:

#include<stdio.h>
int main()
{
	int num,i=1;
	printf("enter the number:");
	scanf("%d",&num);
	int fact=1;
	while(i<num)
	{
		fact=fact*i;
		printf("%d",fact);
		i++;
	}
return 0;	
}
