//Create function to print multiplication of table of a number:

#include<stdio.h>
int main()
{
	int a,res,i;
	printf("enter the number:");
	scanf("%d",&a);
	printf("\nThe table given number:\n");
	void tab(int);//declare
	tab(a);
	printf("khatam");

	return 0;
}
void tab(a)
{
	int i,res;
	for(i=1;i<=10;i++)
	{
		res=a*i;
		printf("%d \n",res);
	}
	
}
