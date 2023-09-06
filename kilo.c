//7) Write a C program to enter length in centimeter and convert it into meter and kilometer.

#include<stdio.h>
#include<conio.h>
int main(){
	int len,met,km;
	printf("enter the length in centimeter :\n");
	scanf("%d",&len);
	met =len/100;
	printf("the converted length into meter is :%d\n",met);
	km=len/1000;
	printf("the converted length into kilometer is :%d",km);
	return 0;
}
