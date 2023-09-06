//Program Name:calulate power using the recursion;

#include<stdio.h>
int main()
{
	int power(int ,int ); //Declaration;
	int base,index,res;
	printf("Enter the base:");
	scanf("%d",&base);
	printf("\nEnter the index:");
	scanf("%d",&index);
	res=power(base,index);
	printf("\nThe power is:%d",res);
	return 0;
}
int i=1,p=1;
int power(int base,int index)
{
	if(i<=index)
	{
		p*=base;
		i++;
		power(base,index);
	}
	return p;
}

