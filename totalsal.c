//calculate the gross salary
//da=30%
//hra=30%
#include<stdio.h>
#include<conio.h>
void main(){
	int bs,da,hra,totsal;
	printf("enter the basic salary :");
	scanf("%d",&bs);
	da=bs*30/100;
	hra=bs*30/100;
	totsal=da+hra+bs;
	printf("\ntotal salary of employee is:%d",totsal);
	
}
