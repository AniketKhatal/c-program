//sum of all no upto n using while loop

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,sum=0,s,e;
//	printf("enter the start number:");
//	scanf("%d",&s);
//	printf("\nenter the end number:");
//	scanf("%d",&e);
printf("enter the value of n :");
scanf("%d",&n);
	
	printf("sum of number:");
	while(i<=n)
	//while(s<=e)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	return 0;
}
