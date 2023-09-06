//programe for the power of the number:

#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,a,b,p;
	
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	
	while(i<=b)
	{
		p=p*a;
		i++;
	}
	printf("power of the a to b :%d",p);
	
	return 0;
}
//
