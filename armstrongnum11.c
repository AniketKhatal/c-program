//Program Name:To check Armstrong number 

#include<stdio.h>
int main()     //main function
{
	int num,i,temp,rem,res=0;
	printf("Enter the number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		res=res+(rem*rem*rem);
		num=num/10;
	}
	if(res==temp)
		printf("Number is armstrong");
	else
		printf("Number is not strong");
	return 0;
}

