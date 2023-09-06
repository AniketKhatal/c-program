//wap to calculate the commisionof salesman;
//0-5000=0
//5k-10k=5%
//10k-20k=10%
//20k-30k=12%
//30k>=15%

#include<stdio.h>
#include<conio.h>
int main(){
	int val;
	printf("enter the sales value :");
	scanf("%d",&val);
	(val<=5000)?printf("the commision is:%d",val*0):
	(val>=5000&&val<=10000)?printf("the commision is:%d",(int)(val*0.05)):
	(val>=10000&&val<=20000)?printf("the commision is:%d",(int)(val*0.1)):
	(val>=20000&&val<=30000)?printf("the commision is:%d",(int)(val*0.12)):
	printf("the commision is%d",(int)(val*0.15));
	return 0;
		
	
}//can we  try without typecasting
