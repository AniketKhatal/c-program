//number of even or odd

#include<stdio.h>
#include<conio.h>
int main(){
	
	int num;
	printf("enter the num");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
	return 0;
}
