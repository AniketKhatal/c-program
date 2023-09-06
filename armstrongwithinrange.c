//program 10 to print all armstrong number with in a range:

#include<stdio.h>
#include<conio.h>
int main()
{
	int start,end,rem,sum,temp,num;
	printf("enter the starting number :");
	scanf("%d",&start);
	printf("enter the ending number :");
	scanf("%d",&end);
	printf("the armstrong number are :");
	
	for(num=start;num<=end;num++)
	{
		temp=num;
		sum=0;
		while(temp!=0)
		{
			
			rem=temp%10;
			temp=temp/10;
			sum=sum+(rem*rem*rem);
			
		}
		if(sum==num)
		{
			printf("\n%d",num);
		}
		
	 } 
	return 0;
}
