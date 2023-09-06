//Program Name:Prime number;

#include<stdio.h>
int main()     //main function
{
	int no,i,count=0;
	printf("Enter the number:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			count++;
		}
	}
	//printf("%d",count);
	if(count==2)
	printf("Number is prime");
	else
	printf("Number is not prime");
	return 0;
}

