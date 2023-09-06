//programe 2:fabonacci series for the 1st 10 element

#include<stdio.h>
int main()
{
	int first=0,second=1,third,num,i=0;
	printf("enter the number upto which to print the fabonacci series :");
	scanf("%d",&num);
//	for(i=2;i<num;i++)
//	{
//		third=first+second;
//		printf("\t%d",third);
//		first=second;
//		second=third;
//	}
//	
	while(i<num)
	{
		third=first+second;
		printf("\n%d",third);
		first=second;
		second=third;
		i++;
	}
	return 0;
}
