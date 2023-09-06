//2)Write a C program to enter two numbers and find their sum.
//3) Write a C program to enter two numbers and perform all arithmetic operations.

#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,add,sub,mul,div;
	printf("enter the two number :\n");
	scanf("%d%d",&a,&b);
	add = a+b;

	printf("the addition of two number is : %d\n",add);
	return 0;
}

