//wap to take any number(3 digit) and check it is palindrome or not 
#include<stdio.h>
#include<conio.h>
int main(){
	int num,rev;
	printf("enter the three digit number :\n");
	scanf("%d",&num);
	rev=(num%10)*100+((num/10)%10)*10+num/100;
	rev==num?printf("number is palindrome"):printf("number is not palindrome");
	return 0;
//	while(n!=0)
//		 {
//		 	rem=n%10;
//			rev=rev*10+rem;
//			n=n/10;	
//		 }
//		 //cout<<rev;
//		 if(rev==temp)
//			cout<<temp<<" number is palindrome";
//		else
//			cout<<temp<<" number is not palindrome";
	
}
