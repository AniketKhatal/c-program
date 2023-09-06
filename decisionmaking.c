//if statement 17/2/23

#include<stdio.h>
#include<conio.h>
int main(){
	int a, b;
	printf("enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
//	if(a>b)
//	{
//		printf("a is greater:%d",a);
//	}
//	if(b>a)
//	{
//		printf("b is greater:%d",b);
//	}
//	if(a==b)
//	{
//		printf("arrrre!,both number are equal:%d",a||b);
//	}

	if(a>b)
	{
	printf("a is greater:%d",a);
	}
	else if(b>a)
	{
		printf("b is greater:%d",b);
	}
	else
	{
		printf("number that you enter that both number are equal");
	}
	return 0;
		
	
}
