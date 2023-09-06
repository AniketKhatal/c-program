//Program Name: Recursion program practice;

//#include<stdio.h>
//int main()
//{
//	void show(int);
//	int no=5;
//	show(no);
//	
//	return 0;
//}
//void show(int x)
//{
//	if(x!=0)
//	{
//		printf("Good morning!\n");
//		show(x-1);
//	}
//	else
//	{
//		printf("END");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	void show(int);//declaration of the function;
//	int no;
//	printf("entre the number:");
//	scanf("%d",&no);
//	show(no);
//	return 0;
//}
//void show(int x)
//{
//	if(x!=0)
//	{
//		printf("Good morning Aniket!\n");
//		show(x-1);
//	}
//	else
//	{
//		printf("END");
//	}
//}

//printing the table using the recursion:

#include<stdio.h>
int main()
{
	void table(num); //declaration
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	table(no);//callinf of the function;
	return 0;
}
int count=0;
void table(int x)
{
	if(count==10)
	{
		printf("END");
	}
	else
	{
		count++;
		printf("%d*%d=%d\n",x,count,x*count);
		table(x);
	}
}














