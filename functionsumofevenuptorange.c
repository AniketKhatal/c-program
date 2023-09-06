//wap to create function EvenSum(int range),Calculate sum of 
//even number upto range given as parameter:

#include<stdio.h>
int main()
{
	int range;
	printf("Enter the range :");
	scanf("%d",&range);
	printf("\nThe sum of even number upto :");
	void EvenSum(int range);
	EvenSum(range);
	return 0;
}
void EvenSum(int range)
{
	int i=0,sum=0;
	for(i=(i+2);i<=range;i++)
	{   
		if(i%2==0)
		{
			sum=sum+i;
		}
		
	
	}
		printf("\n%d",sum);
}
