//16) Write a C program to enter marks of five subjects and calculate total, average and percentage.
#include<stdio.h>
#include<conio.h>
int main(){
	int s1,s2,s3,s4,sum;
	float per,avg;
	printf("enter the marks of subject :\n");
	scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
	sum=s1+s2+s3+s4;
	avg=sum/4;
	per=avg*100;
	printf("the sum :%d",sum);
	printf("the averge : %f\n", avg);
	printf("the percentage of the student :%f\n",per);
	return 0;
	
	
	
}
