//6-13=child
//13-19=teenager
//19-35=young
//35-50=elder
//50>=senior citizen

#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	printf("enter the age :\n");
	scanf("%d",&age);
	(age<6)?printf("are tu to baccha hai"):
	(age>=6&&age<13)?printf("you are a child"):
	(age>=13&&age<19)?printf("you are a teenager"):
	(age>=19&&age<35)?printf("you are young"):
	(age>=35&&age<50)?printf("you are elder person"):
		printf("senior citizen");
	return 0;
	
}
