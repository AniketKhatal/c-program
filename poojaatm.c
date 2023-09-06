//poojaATM

#include<stdio.h>
#include<conio.h>
int main(){
	int bal,withdraw,rembal;
	printf("enter the balance:,withdraw bal:");
	scanf("%d%d",&bal,&withdraw);
	if(withdraws%5==0)
	{
	     if(bal>withdraw)
	      {
		      rembal=(bal-withdraw)-0.50;
		      printf("remaining balance:%d,\nsuccessful transaction",rembal);
	      }
	     else if(bal<withdraw)
		  {
		      printf("insufficient funds");
          }
	     else
		 {
		   printf("");
	     }
    }
	else
	{
		printf("incorrect withdrawl amount");
	}
		
	return 0;
}
