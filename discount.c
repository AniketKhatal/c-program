//wap to check actual fees of student

#include<stdio.h>
#include<conio.h>
int main(){
	float fees,percen,per,disc;
	
	printf("enter the fees and percentage of student:\n");
	scanf("%f%f",&fees,&per);
	//per=percen/100;
	
	if(per>85){
		disc=fees*0.25;
		fees=fees-disc;
		printf("the discount in fees:%f",disc);
		printf("\nactual fees:%f",fees);
	}
	else if (per>75 && per<=85)
	{
		disc=fees*0.2;
		fees=fees-disc;
		printf("the discount in fees:%f",disc);
		printf("\nactual fees:%f",fees);	
	}
	else  if (per>65 && per<=75)
	{
		disc=fees*0.15;
		fees=fees-disc;
		printf("the discount in fees:%f",disc);
		printf("\nactual fees:%f",fees);
	}
	else if(per>55 && per<=65)
	{
		disc=fees*0.1;
		fees=fees-disc;
		printf("the discount in fees:%f",disc);
		printf("\nactual fees:%f",fees);
		
	}
	else
	{
		printf("no discount");
	}
	return 0;
}
