#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int num,power;
	printf("enter the number and its power:\n");
	scanf("%d%d",&num,&power);
	printf("%f",pow(num,power));
	return 0;	
}
