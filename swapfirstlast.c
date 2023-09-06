//wap to swap the 1st and last digit of entered 4digit number
//i/p=1234 o/p =4231

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,res;
	printf("enterr the four digit number \n:");
	scanf("%d",&num);
	res=((num%100)%10)*1000+((num%1000)/10)*10+num/1000;
	printf("%d",res);
	return 0;
}
