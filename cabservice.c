//cab service

#include<stdio.h>
#include<conio.h>
int main(){
	int cs1,cs2;
	
	printf("enter the services of cab1 and cab2 :\n");
	scanf("%d%d",&cs1,&cs2);
	
	if(cs1>cs2){
		printf("\nsecond");
	}
	else if(cs1<cs2){
		printf("\nfirst");
	}
	else if(cs1==cs2){
		printf("\nany");
	}

	else{
		printf("");
	}
	return 0;
}
