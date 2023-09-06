//wap to calulate the area of circle using fumction:

#include<stdio.h>
int main()
{
	float r;
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	printf("The area of circle is:");
	void areac(float);
	areac(r);
	return 0;
}
void areac(float r)
{
	float pi=3.14;
	float ar=pi*r*r;
	printf("%f",ar);
	
}
