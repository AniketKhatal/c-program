//Program Name:  i   j j
/*   8           1	 3 3  
    888			 2	 2 4
   88888		 3   1 5
   12345
*/
//#include<stdio.h>
//int main()     //main function
//{
//	int i,j;
//	for(i=0;i<=3;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(j<=4-i)
//			printf("8");
//			else
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*
1111
1111
1111
1111

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("1");
		}
		printf("\n");
	}
	return 0;
}*/
/*
*
**
***
****
*****


#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<i+1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}*/
/*
1    // 1
22   // 12
333  // 123 like that
4444
55555
*/

//structure prac program
//#include<stdio.h>
//struct emp
//{
//	int id;
//	char nm[20];
//	int exp;
//};//e[5];
//int main()
//{
//	struct emp e[5];
//	int i;
//	for(i=0;i<2;i++)
//	{
//	printf("\nEnter the name of the employee:");
//	scanf("%s",&e[i].nm);
//	printf("\nEnter the id of emp:");
//	scanf("%d",&e[i].id);
//	
//	printf("\nEnter the experience:");
//	scanf("%d",&e[i].exp);
//	}
//	for(i=0;i<2;i++)
//	{
//		printf("\n%d",e[i].id);
//		printf("\n%s",e[i].nm);
//		printf("\n%d",e[i].exp);
//	}
//	
//	return 0;
//}
/*
12345
12345
12345
12345
12345

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}
	return 0;
}

//111111
//222222
//222222
//222222
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=6;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}

//*****
//*****
//*****
//*****
//*****
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

//ABCDE
//ABCDE
//ABCDE
//ABCDE
//ABCDE
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c ",64+j);
		}
		printf("\n");
	}
	return 0;
}

//54321
//54321
//54321
//54321
//54321
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
//		for(j=5;j>=1;j--)
//		{
//			printf("%d",j);
//		}
	for(j=1;j<=5;j++)
	{
		printf("%d ",6-j);
	}
		printf("\n");
	}
	return 0;
}*/

