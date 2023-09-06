//13) Write a C program to enter two angles of a triangle and find the third angle.

#include<stdio.h>
#include<conio.h>
int main(){
	int a1,a2,a3,angles;
	printf("ennter the two angles of triangles :\n");
	scanf("%d%d",&a1,&a2);
	angles=180-(a1+a2);
	printf("the 3rd anlges of tringles is :%d\n",angles);
	return 0;
	
	
}
