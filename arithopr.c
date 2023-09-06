//3) Write a C program to enter two numbers and perform all arithmetic operations.

#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,add,sub,mul,div;
	printf("enter the two number :\n");
	scanf("%d%d",&a,&b);
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	printf("the addition of two number is : %d\n",add);
	printf("the substraction of two number is : %d\n",sub);
	printf("the multiplication  of two number is : %d\n",mul);
	printf("the division  of two number is : %d\n",div);
	return 0;
}

