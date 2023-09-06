//write a program to check wether evenor odd

#include<stdio.h>
#include<conio.h>
int main(){
	int num,res;
	printf("enter the number :\n");
	scanf("%d",&num);
	res=num/10;
	res==0?printf("number is even"):printf("number is odd");
	return 0;
	
}
