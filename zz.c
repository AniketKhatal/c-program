//do-while: 

//#include<stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		i++;
//		if(i%2==1)
//		{
//			continue;
//		}
//		printf("\n%d",i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i=1;
//	do
//	{
//		printf("\ngood morning");
//		i++;
//	}
//	while(i<3);
//	return 0;
//}

//prorgam to check the bill
//
//#include<stdio.h>
//int main()
//{
//	int rate,quant,bill;
//	char ch;
//	printf("enter the rate and quantity of product:");
//	scanf("%d%d",&rate,&quant);
//	do
//	{
//	bill=quant*rate;
//	printf("\nthe total bill was:%d",bill);
//	printf("\ndo u want to more bill:");
//	//fflush(stdin);
//	ch=getche();
//	}
//	while(ch=='Y' ||ch=='y');
//	getche();
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i ,j,num=1;
//	for (i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",num);
//			num=num+1;
//	
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i,j,space,num;
//	printf("enter the number:");
//	scanf("%d",&num);
//	space=2*(num-1);
//	for(i=1;i<=num;i++)
//	{	//number:
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",j);
//		}
//		for(j=1;j<=space;j++)
//		{
//			printf(" ");
//		}
//		for(j=i;j>=1;j--)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//		space=space-2;
//	}
//	return 0;
//}

/*
1
01
010
0101
01010
*/

//#include<stdio.h>
//int main()
//{
//	int i,j,num,start=1;
//	printf("enter the number:");
//	scanf("%d",&num);
//	for(i=1;i<=num;i++)
//	{
//		if(i/2==0)
//		{
//			start=1;
//		}
//		else
//		{
//			start=0;
//		}
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",start);
//			start=1-start;
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i,j,n;
	char ch;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=i;i<=n;i++)
	{	
		for(ch='A';ch<='A'+(n-i-1);ch++)
		{
			printf("%c",ch);
			
		}
		printf("\n");
	}
	return 0;
}
