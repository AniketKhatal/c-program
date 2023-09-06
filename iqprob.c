//IQ problem
#include<stdio.h>
#include<conio.h>
int main(){
	int iq,res;
	printf("enter the iq of chef:");
	scanf("%d",&iq);
	res=iq+7;
	if(iq>=100 && iq<=169)
	{
	
	if(res>170)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	}
	else
	{
		printf("invalid input");
	}

	return 0;
}
