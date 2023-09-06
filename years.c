//10) Write a C program to convert days into years, weeks and days.
#include<stdio.h>
#include<conio.h>
int main(){
	int days,weeks,year;
	printf("enter the days:");
	scanf("%d",&days);
	year=days/365;
	printf("the year is :%d",year);
	weeks=days/7;
	printf("total weeks is:%d",weeks);
	return 0;
	}
