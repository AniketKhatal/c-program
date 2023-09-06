//reverse number using the function:

#include<stdio.h>
int main()
{
	void rev(int);
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	rev(num);
	return 0;
}
void rev(int z)
{
	int rem=0,r;
	while(z!=0)
	{
		rem=z%10;
		z=z/10;
		r=r*10+rem;
	}
	printf("The reverse number is:%d",r);
}
