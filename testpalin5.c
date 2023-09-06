//program 5:check the given number is palindrome or not

#include<stdio.h>
int main(){
	int num,rev;
	printf("enter the three digit number :\n");
	scanf("%d",&num);
	rev=(num%10)*100+((num/10)%10)*10+num/100;
	rev==num?printf("number is palindrome"):printf("number is not palindrome");
	return 0;
	
}
