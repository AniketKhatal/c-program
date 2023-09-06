//program for to check the appearence of each number:
/* algorithm:
1)take a number
2)i/p the digit number that you want to check the appearence
3)saperate the digit of number
4)compare the digit with others saperated digit
5)print the occurance
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	long num;
	int digit,count,temp,rem;
	printf("enter the number :");
	scanf("%ld",&num);
	printf("\nenter  the digit :");
	scanf("%d",&digit);
	count=0;
	temp=num;	
	while(num!=0)
	{
		rem=num%10;
		if(rem==digit)
		{
			count++;
		}
		num=num/10;
	}
	printf("the digit occource of %d: in %d",count,temp);
	return 0;
}
