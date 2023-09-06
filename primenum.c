//write a program to print all prime number between 1 to n:

#include<stdio.h>
#include<conio.h>
int main()
{
	
	int first,last,i=2,count,num;
	printf("enter the first and last number :");
	scanf("%d%d",&first,&last);
	num=first;
	while(num<=last)
	{
		count=0;  
		i=2;
		while(i<=num/2)
		{
			if(num%i==0)
			{
				count++;
				break;
			}
			i++;
		}
		if(count == 0 && num!=1)
		{
			printf("\n%d",num);
		}
		num++;
		
	}
	return 0;
}
