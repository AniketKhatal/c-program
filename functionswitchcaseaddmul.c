//wap to create calulator using function and switch case pass two parameter in it 
//and calculate result,create function add(),substact(),multiply(),divide()& modulo()
//case1=Addition
//case2=multiply
//case3=Division
//case4=Modulo

#include<stdio.h>
int main()
{
	int a,b,ch;
	//declartion:
	void add(int ,int);
	void mul(int,int);
	void div(int ,int);
	void mod(int ,int);
	
	
	printf("enter the value of a and b :");
	scanf("%d%d",&a,&b);
	printf("\nEnter the choice:");
	scanf("%d",&ch);
	
	//calling
	switch(ch)
	{
		case 1:
			add(a,b);
		break;
		case 2:
			mul(a,b);
		break;
		case 3:
			div(a,b);
		break;
		case 4:
			mod(a,b);
		break;
		default:
			printf("\ninvalid choice");
	}
	return 0;
}
//defination:
	void add(a,b)
	{
		printf("\nthe sum of number: %d",a+b);
	}
	void mul(a,b)
	{
		printf("\nthe multiplcation of number: %d",a*b);
	}
	void div(a,b)
	{
		printf("\nThe division of number: %d",a/b);
	}
	void mod(a,b)
	{
		printf("\n The modulous of two number: %d",a%b);
	}

