//wap to find diameter,circumference and area of circle using functions.
//dia=2r ,circum=2*pi*r  ,area=pi*r*r;
#include<stdio.h>
double diameter(int rad);
double circum(int rad);
double area(int rad);
float pi=3.14;
	
int main()
{
	
	int rad;
	double dia;
	double cir;
	double areac;
	printf("Enter the Radius of circle:");
	scanf("%d",&rad);
	dia=diameter(rad);
	printf("\nThe diameter of Circle is% :%f",dia);
	cir=circum(rad);
	printf("\nThe circumference of circle is :%f",cir);
	areac=area(rad);
	printf("\nThe area of circle is :%f",areac);
	return 0;
}
double diameter(int rad)
{
	double dia=2*rad;
	return dia;
}
double circum(int rad)
{
	double cir=2*pi*rad;
	return cir;
}
double area(int rad)
{
	double areac=pi*rad*rad;
	return areac;
}

