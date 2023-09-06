//pattern 
/*
    A
   B B
  C C C
 D D D D
E E E E E
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,flag=1;
	char ch;
	ch='A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j>=6-i && j<=4+i && flag)
			{
				printf("%c",ch);
				
				flag=0;
			}
			else
			{
				printf(" ");
				flag=1;
			}
		 
		}
		ch++;
		printf("\n");
	}
	return 0;
}
