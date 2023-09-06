//wap to  swap the 1st and 4th digit of 4digit number 
#include<stdio.h>
#include<conio.h>
int main(){
	int num,rem,res=0;
	printf("enter the four digit number :\n");
	scanf("%d",&num);
	res=(num%10)*1000+((num/100)%10)*100+num/1000;
	return 0;
	
	
}
