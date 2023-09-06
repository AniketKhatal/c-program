////to check the number is armstrong or not
//
//#include<stdio.h>
//#include<conio.h>
//
//int main(){
//	int num,num1,num2,num3,res;
//	printf("enter the three digitnum:\n");
//	scanf("%d",&num);
//	num1=num/100;
//	num2=((num/10)%10);
//	num3=num%10;
//	
//	res=(num1*num1*num1)+(num2*num2*num2)+(num3*num3*num3);
//	
//	if(num==res){
//		printf("num is armstrong");
//	}
//	else
//	{
//		printf("num is not armstrong");
//	}
//	return 0;
//}

#include<stdio.h>
#include<conio.h>
int main(){
int num,sum=0,temp,rem;
//clrscr();
printf("enter the number");
scanf("%d",&num);
temp=num;
while(num>0)
{
rem=num%10;
sum=sum+rem*rem*rem;
num/=10;
}
if(sum==temp)
printf("\n the number is a armstrong");
else
printf("\n the number is not Armstrong");
return 0;
//getch();
}
