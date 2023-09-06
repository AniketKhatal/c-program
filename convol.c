//calulate the volume of cone
//vol=(3.14r2h)/3

#include<stdio.h>
#include<conio.h>
int main(){
	float r,h,vol;
	
	printf("enter the redius and height of cone\n:");
	scanf("%f%f",&r,&h);
	vol=((3.14*(r*r)*h))/3;
	printf("the volume of the cone is :%f",vol);
	return 0;
}        
