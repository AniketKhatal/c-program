//8)  Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
//1cel=33.8fahrenheit
//9)  Write a C program to enter temperature in Fahrenheit and convert to Celsius
// 1fah=-17.22 cel
#include<stdio.h>
#include<conio.h>
int main(){
	float cel,fah,fah1,cel1;
	printf("enter the celcius value of temperature :\n");
	printf("enter the  value of temperature in fah :\n");
	scanf("%f",&cel);
	scanf("%f",&fah1);
	fah =(1.8 * cel) + 32;
	cel1=(fah1-32)*5/9;
	printf("the converted termp into fah is :%f\n",fah);
	printf("the converted termp into celcius is :%f\n",cel1);
	return 0;
	
	
}
