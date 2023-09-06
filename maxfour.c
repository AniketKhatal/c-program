//wap to find maxi bet 4 number using conditonal operator
#include<stdio.h>
#include<conio.h>
int main(){
	int n1,n2,n3,n4;
	printf("enter the 3 numbers as n1 ,n2, n3,n4 :\n");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	
	(n1>n2&&n1>n3&&n1>n4)?printf("n1 is greater%d",n1):
	(n2>n1&&n2>n3&&n2>n4)?printf("n2 is greater %d",n2):
	(n3>n1&&n3>n2&&n3>n4)?printf("n3 is greater %d",n3):
	printf("n4 is greater %d",n4);
		
	return 0;
}


