//wap to validate the candidate if they are eligible or not for voting
#include<stdio.h>
#include<conio.h>
int main(){
	int age,vot=18;
	printf("enter the age of candidate :\n");
	scanf("%d",&age);
	age>=vot?printf("candidate valid for votting"):printf("candidate not able to do votting");
}
