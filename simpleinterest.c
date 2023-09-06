//17) Write a C program to enter P, T, R and calculate Simple Interest.
//	(S.I. = P × R × T)

#include<stdio.h>   
#include<conio.h>
int main(){
	float p,t,r,simint;
	printf("enter the principle amount,rate of interest,time:\n");
	scanf("%f%f%f",&p,&r,&t);
	simint=(p*r*t)/100;
	printf("the simple interest is :%f",simint);
	
}
//P= 5000 #Principal Amount  
//R=15 #Rate   
//T=1 #Time 
