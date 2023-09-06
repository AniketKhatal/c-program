#include<stdio.h>
   int main ()
{
	int no,rev1;
	printf("Enter three digit number from keyboard\n");
	scanf("%d",&no);
	int rem=0;
	int rev=0;
	/*
	
	rem=no%10;
	no=no/10;
	rev=rev+rem*100;
	printf("revert is %d\n",rev);
	
	rem=no%10;
	no=no/10;
	rev=rev+rem*10;
	printf("revert is %d\n",rev);
	
	rem=no%10;
	no=no/10;
	rev1=rev+rem*1;
	printf("revert is %d\n",rev1);

	*/
	rev=(no%10)*100+((no/10)%10)*10+no/100;
	printf("revert is %d\n",rev);
	rev==no?printf("number is palindrome"):printf("number is not palindrome");
//	if (no==rev)
//	{
//		printf("Number is palimdrom");
//	}
//	else
//	{
//		printf("Number is not palimdrom");
//	}
	return 0;
}
