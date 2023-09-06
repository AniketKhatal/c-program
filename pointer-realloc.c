//Algorithm:
//I)  input number of plate as order 
//ii) Then calculate required manpower e.g. suppose we consider for 10 people or 10 plate 1 employee required  
//iii)Count number of people or plate at run time 
//iv) If number of plat at runtime is greater than number of order plate then
//	  We required extra man power
//v)  Then minus order plat from on spot plat then we get extra plate or extra people 
//	  So according to that we can calculate extra manpower.
//v)  Display all manpower means previous and extra manpower 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int nplate,mpower,i,*ptr,osplate,eplate,ospower;
	printf("Enter the number of plate:");
	scanf("%d",&nplate);
	mpower=nplate/10;
	ptr=(int*)malloc(sizeof(int*)*nplate);
	printf("assign the number to manpower:");
	for(i=0;i<mpower;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("onspot plate:");
	scanf("%d",&osplate);
	if(osplate>nplate)
	{
		eplate=osplate-nplate;
		ospower=eplate/10;
		ptr=(int*)realloc(ptr,sizeof(int*)*eplate);
		printf("\nenter the extra number for extra manpower:");
		for(i=mpower;i<(mpower+osplate);i++)
		{
			scanf("%d",&ptr[i]);
		}
		printf("the all manpower in karykram:");
		for(i=0;i<(mpower+osplate);i++);
		{
			printf("ptr[%d]---->%d",i,ptr[i]);
		}
	}
	else
	{
		printf("No change in ManPower!");
	}
}

