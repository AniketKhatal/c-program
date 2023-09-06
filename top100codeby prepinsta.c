//Program Name: top 100 code by prepinsta;
//1.positive,negative number;
/*#include<stdio.h>
int main()     //main function
{
float num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num<=0)
	{
		if(num==0)
		{
			printf("number is zero");
		}
		else
		{
			printf("number is negative");
		}
	}
	else
	{
		printf("Number positive");
	}
	return 0;
}*/

//To check the number is odd or even;
/*#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number that you want to check:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	return 0;
}*/

//sum of 1st n natural number:
/*
#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("Enter the number upto you want to print the sum:");
	scanf("%d",&num);
	printf("The sum of 1st %d natural number is:",num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
		
		printf("\n%d+%d=%d",sum,i,sum);
	}
	//printf("The sum of 1st %d natural number is %d",num,sum);
	return 0;
}
#include<stdio.h>
int main()
{
int sum = 0, n;
printf("Enter the first N Natural Number\n");
scanf("%d",&n);
sum=(n*(n+1))/2;
printf("sum is %d",sum);
return 0;
}*/

//print the sum between user given range;
/*
#include<stdio.h>
int main()
{
	int r1,r2,i,sum=0;
	printf("Enter the starting point: ");
	scanf("%d",&r1);
	printf("\nEnter the end of the number: ");
	scanf("%d",&r2);
	for(i=r1;i<=r2;i++)
	{
		sum=sum+i;
	}
	printf("\nThe sum of range of %d to %d is : %d",r1,r2,sum);
	return 0;
}*/

//greatest of two number;


