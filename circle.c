//6) Write a C program to enter radius of a circle and find its diameter, circumference and area.
//  	NOTE: Diameter of a Circle	D = 2 × r   Circumference of a Circle	C = 2 × p × r  Area of a Circle	 A = p × rxr

#include<stdio.h>
#include<conio.h>
int main(){
	float rad,dia,cir,area,pi=3.14;
	printf("ente the radius of the circlr :\n");
	scanf("%f",&rad);
	dia=2*rad;
	printf("Diameter of the circle :%f",dia);
	cir=2*(pi*rad);
	printf("\nthe circumference of the circle :%f",cir);
	area=pi*rad*rad;
	printf("\nthe area of the circle is :%f",area);
	return 0;
}

