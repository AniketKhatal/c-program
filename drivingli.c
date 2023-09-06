//driving license;
//i/p=23 ,15

#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	printf("enter the age :\n");
	scanf("%d",&age);
	(age>=18)?printf("elligible for driving license"):printf("not eligible");
	return 0;
}
