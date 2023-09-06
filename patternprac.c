/*
#include<stdio.h>
int main()
{
	int i,j;
	for (i=1;i<=4;i++)
	{
		for (j=1;j<=4;j++)
		{
			printf("*");
		}
	printf("\n");
	}
	
	return 0;
}
//o/p:
//****
//****
//****
//****
*/
/*
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
op:
*
**
***
****
*****
*/
/*
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);  //printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
o/p:
1    // 1
22   // 12
333  // 123 like that
4444
55555
*/
/*
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
o/p:
*****
****
***
**
*

*/
/*
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i ;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
	printf("\n");
	}
	return 0;
}
o/p:
    *
   ***
  *****
 *******
*********

*/
/*
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the num:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*n-(2*i+1);j++)
		{
			printf("*");
		}
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
op:
enter the num:6
*********
 *******
  *****
   ***
    *
*/

/* 
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    
*/
/*
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		int star=i ;
		if(i>n) star=2*n-i;
		for(j=1;j<=star;j++)
		{
			printf("*");
		}
	printf("\n");	
	}
	return 0;
}
o/p:
enter the number:5
*
**
***
****
*****
****
***
**
*
*/
/*
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
			{
				printf("%d",i);
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
o/p:
1
2*
3*3
4*4*
5*5*5
*/
/*
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j<i)
			{
				printf("%d*",j);
			}
			else
			{
				printf("%d",i);
			}
		}
		printf("\n");
	}
	return 0;
}
o/p:
1
1*2
1*2*3
1*2*3*4
*/
/*
#include<stdio.h>
int main()
{
	int start=1,i,j,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i/2==0) start=1;
	else start =0;
	for(j=1;j<=i;j++)
	{
		printf("%d",start);
		start=1-start;
	}
	printf("\n");
}
return 0;
}
o/p:
enter the number: 5
1
01
010
0101
01010
*/
/*
#include<stdio.h>
int main()
{
	int i,j,num=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",num);
			num=num+1;
			//num++;
		}
		printf("\n");
	}
	return 0;
}
o/p:
1
23
456
78910
1112131415
*/
/*
#include<stdio.h>
int main()
{
	int i,j,num;
	printf("enter the number:");
	scanf("%d",&num);
	int space=2*(num-1);
	for(i=1;i<=num;i++)
	{	//number:
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		space=space-2;
		
	}
	
	return 0;
}
o/p:
enter the number:5
1        1
12      21
123    321
1234  4321
1234554321
*/

/*
enter the number:4
A
AB
ABC
ABCD
ABCDE

#include<stdio.h>
int main()
{
	int i,j,n;
	char ch;
	printf("enter the num");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(ch='A';ch<='A'+i;ch++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
enter the number:5
ABCDE
ABCD
ABC
AB
A

#include<stdio.h>
int main()
{
int i,j,n;
char ch;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	for(ch='A';ch<='A'+(n-i-1);ch++)
	{
		printf("%c",ch);
	}
	printf("\n");
}
return 0;
}
*/
/*
enter the num:5
A
AB
ABC
ABCD
ABCDE
ABCDEF
#include<stdio.h>
int main()
{
	int i,j ,n;
	char ch;
	printf("enter the num:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(ch='A';ch<='A'+i;ch++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
enter the num:4
A
BB
CCC
DDDD
EEEEE

#include<stdio.h>
int main()
{
	int i=0,j,n;
	char ch;
	printf("enter the num:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		ch='A'+i;
		for(j=0;j<=i;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
*/
 

