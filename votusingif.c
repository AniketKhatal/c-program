//check the eligibility os
//a)voting
//b)driving li

#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	
	printf("enter the age of candidate :/n");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("eligilble for both voting n dri lice also");
	}
	else if (age>=65)
	{
		printf("sorry:(  you are tooo old,but u r eligible for voting");
	}
	
	else
	{
		printf("not eligible:");
	}
	return 0;
	
}
