//Write a C program to enter base and height of a triangle and find its area.
#include<stdio.h>
#include<conio.h>
int main(){
	int height,base,area;
	printf("ente the base of triangle :\n");
	scanf("%d",&base);
	printf("enter the height of triangle :\n");
	scanf("%d",&height);
	area=0.5*(base*height);
	printf("the area of triangle : %d\n",area);
	return 0;
	
}
