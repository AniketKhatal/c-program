//factorial number:

#include<stdio.h>
#include<conio.h>
int main()
{
	int fact=1,i=1,no;
	
	printf("enter  the number:");
	scanf("%d",&no);
	while(i<=no)
	{
		fact=fact*i;//1*1 2*2
		i++;
	}
	printf("the factorial of the number is:%d",fact);
	return 0;
	
}
