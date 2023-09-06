//wap to chceck the vald triangle or not:
#include<stdio.h>
#include<conio.h>
int main(){
	int a1,a2,a3;
	printf("enter the angles of triangle :\n");
	scanf("%d%d%d",&a1,&a2,&a3);
	(a1+a2+a3)==180?printf("valid triangle"):printf("invalid triangle");
	return 0;
	}
