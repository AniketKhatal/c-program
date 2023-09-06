//id=001 & salary==10000=temp
//id=100 &sal=35000=per

#include<stdio.h>
#include<conio.h>
int main(){
	
	int id ,sal;
	printf("enter the id and salary of the emp :\n");
	scanf("%d%d",&id,&sal);
	
	if(id>=99&&sal>=34999){
		printf("the emp is temporary");
	}
	else if (id<=100&&sal<=35000){
		printf("emp is permonant");
	}
	else
	{
		printf("data is not valid");
	}
}
