//do-while loop 
//programe for show the sum of the three subject


#include<stdio.h>
#include<conio.h>
int main()
{

int s1,s2,s3,sum;
char choice;
do
{
	printf("enter the suject marks :");
	scanf("%d%d%d",&s1,&s2,&s3);
	sum=s1+s2+s3;
	printf("the sum of the three subject is:%d",sum);
  	printf("\ndo want to continue  :Y/N :");
	fflush(stdin);
	choice=getche();
}
while(choice!='n' && choice=='N');
{
	getche();
}
return 0;
}
