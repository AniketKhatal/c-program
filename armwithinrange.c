//Program Name:

#include<stdio.h>
int main()     //main function
{
	int s,e,i,temp,rem,arm;
	printf("Enter the start :");
	scanf("%d",&s);
	printf("Enter the end:");
	scanf("%d",&e);
	for(i=s;i<=e;i++)
	{
		temp=i,arm=0;
		while(temp!=0)
		{ 
		
			
			rem=temp%10;
			temp/=10;
			arm=arm+(rem*rem*rem);
			
		}
		if(arm==i)
		{
			printf("\n%d",i);
		}
		
	}
	
	return 0;
}

