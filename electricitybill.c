//program for electricity bill
/*
// write a C program to input electricity unit charges and calculate
// The total electricity bill according to the given condition: 
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.
*/
#include<stdio.h>
int main()
{
	int unit ;
	float bill;
	printf("enter the no of unit :");
	scanf("%d",&unit);
	
	if(unit<=50)                      // For first 50 units Rs. 0.50/unit
	{
		bill=unit*0.50;
	}
	else if(unit<=150)               // For next 100 units Rs. 0.75/unit  50+100=150
	{
		bill=(50*0.50)+((unit-50)*0.75);
	}
	else if(unit<=250)               // For next 100 units Rs. 1.20/unit  150+100=250
	{
		bill=(50*0.50)+(100*0.75)+((unit-150)*1.2);
	}
	else                             // For unit above 250 Rs. 1.50/unit 
	{  
		bill=(50*0.50)+(100*0.75)+(100*1.2)+((unit-250)*1.5);
	}
	bill=bill+bill*0.2;              // An additional surcharge of 20% is added to the bill.
	printf("bill is :%f",bill);
	return 0;
}
