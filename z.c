#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,a,b,p;
	printf("enter the value of the a:");
	scanf("%d",&a);
	printf("enter the value of the b :");
	scanf("%d",&b);
	while(i<=b)
	{
		p=p*a;
		i++;
	}
	printf("the value of the power is the :%dnnnn",p);
	return 0;
	
}
