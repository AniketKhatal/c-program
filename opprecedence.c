//wap to calculate the
//x=(a+b)*c(a-b)/5
//operator precedence

#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,x;
	printf("enter the value of a,b,c,:\n");
	scanf("%d%d%d",&a,&b,&c);
	x=(a+b) * (c*(a-b)/5);
	printf("the value of x :%d",x);
	return 0;
}
