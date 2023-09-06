//ezio problem

#include<stdio.h>
#include<conio.h>
int main(){
	int captolead,lead;
	
	printf("enter the capsity to lead :,\nactual lead:");
	scanf("%d%d",&captolead,&lead);
	if(lead>captolead)
	{
		printf("NO");
	}
	else if(captolead>lead)
	{
		printf("YES");	
	}
	else if(captolead==lead)
	{
		printf("YES");
	}
	else
	{
		printf("");
	}
	return 0;
}
