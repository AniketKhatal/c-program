//swap between two number without using third variable
//we can also did with xor operator

#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	a=10,b=20;
	printf("before swapping \na=%d\nb=%d",a,b);
//	a=a^b;
//	b=a^b;
//	a=a^b;
    a=a+b; 
	b=a-b;
	a=a-b;
	printf("\nafter swapping \na=%d\nb=%d",a,b);
	return 0;
	
}
