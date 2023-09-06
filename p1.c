
//#include<stdio.h>
//int main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			printf("%d ",j);//i
//		}
//		printf("\n");
//	}
//	return 0;
//}
////1 2 3 4 5
////1 2 3 4 5
////1 2 3 4 5
////1 2 3 4 5
////1 2 3 4 5

//#include<stdio.h>
//int main()
//{
//	int i ,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=0;j<=5;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
////******
////******
////******
////******
////******

//#include<stdio.h>
//int main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=5;j>=5;j--)
//		{
//			printf("%d",i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(i==1 ||i==5 ||j==1||j==5)
//			{
//				printf("*");
//		
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//	printf("\n");	
//	}
//	return 0;
//}

#include<stdio.h>
void prime(int);
int main()
{
	int num;
	printf("Enter the num :");
	scanf("%d",&num);
	prime(num);
	return 0;
}
void prime(int x)
{
	int i,count=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
			
		}
	}
	if(count==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
