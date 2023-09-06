//wap to swap the 1st and last digit of entered 4digit number

#include<stdio.h>
#include<conio.h>
int main(){
	int num,res;
	printf("enterr the four digit number :");
	scanf("%d",num);
	res=((num%100)%10)*1000+((num%1000)/10)*10+num/1000;
	return 0;
}
