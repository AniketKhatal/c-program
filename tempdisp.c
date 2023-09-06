//display temp message

#include<stdio.h>
#include<conio.h>
int main()
{
	int temp;
	printf("enter the temperature in celcius:");
	scanf("%d",&temp);
	
	if(temp<0)
	{
		printf("Frezzing weather");
	}
	else if(temp>0 && temp<=10)
	{
		printf("Very cold Weather");
	}
	else if(temp>10 && temp<=20)
	{
		printf("Cold weather");
	}
	else if(temp>20 && temp<=30)
	{
		printf("normal in temp");
	}
	else if(temp>30 && temp<=40)
	{
		printf("its hot");
	}
	else
	{
		printf("its nvery hot");
	}
	return 0;
}
