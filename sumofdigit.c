//addition of entered number 123
#include<stdio.h>
#include<conio.h>
int main(){
	int num,sum=0,rem;
	printf("entered the three digit number:\n");
	scanf("%d",&num);
	sum=(num%10)+((num/10)%10)+num/100;
	printf("the sum of digit of number is %d",sum);
	return 0;
	
}

