//course enrollment

#include<stdio.h>
#include<conio.h>
int main(){
	int totcap,enrollstud,addopen,res;
	printf("enter the total capacity of class:");
	scanf("%d",&totcap);
	printf("\nenter the already enrolled student :");
	scanf("%d",&enrollstud);
	printf("enter the admission student :");
	scanf("%d",&addopen);
	
	res=enrollstud+addopen;
	
	if(totcap>res)
	{
		printf("YES");
	}
	else if(totcap==res)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
