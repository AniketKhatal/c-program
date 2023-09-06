//wap to check leap year or not usiing conditional operartor

#include<stdio.h>
#include<conio.h>
int main(){
	int year;
	printf("enter the year that you want to check leap year or not:");
	scanf("%d",&year);
	(year%4==0)&&((year%400==0)||(year%100!=0))?printf("leap year"):printf("not leap");
	return 0;
} 
