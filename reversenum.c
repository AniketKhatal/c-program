//wap to reverse a digit
 //i/p=123 o/p=321
 #include<stdio.h>
 #include<conio.h>
 int main(){
 	int num,rem,sum=0;
 	printf("enter three number :\n");
 	scanf("%d",&num);
 	sum=(num%10)*100 + ((num/10)%10)*10 + num/100;
 	printf("the number before reverse :%d",num);
 	printf("\nthe reverse number is:%d",sum);
 	return 0;
 }
