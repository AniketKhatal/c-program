//wap a program to calulate 
//current(i)using ohm's law=(I=v/r)
//i/p=v=120
//resr(r)=45
//o/p2.666amp

#include<stdio.h>
#include<conio.h>
int main(){
	float V,R,I;
	
	printf("enter the voltage:\nresistance:\n");
	scanf("%f%f",&V,&R);
	I=V/R;
	printf("the value of current acc to ohm's law:%f\n",I);
	V=I*R;
	printf("\nthe voltage is:%f",V);
	R=V/I;
	printf("\nthe resistance is:%f",R);
	
	
	
	
	return 0;
	
}
