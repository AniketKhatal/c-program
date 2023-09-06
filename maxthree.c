//wap to find maximum number between three number

#include<stdio.h>
#include<conio.h>
int main(){
	int n1,n2,n3;
	printf("enter the 3 numbers as n1 ,n2, n3 :\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	(n1==n2&&n1==n3)||(n2==n1&&n2==n3)||(n3==n1&&n3==n2)?printf("invalid input"):
	(n1>n2&&n1>n3)?printf("n1 is greater%d",n1):
	(n2>n1&&n2>n3)?printf("n2 is greater %d",n2):
	printf("n3 is greater %d",n3);
	return 0;
}
