//program 3:
/*
*/

#include<stdio.h>
int main()
{
	int i,j,n;
	char ch;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1,ch='A';i<=n;i++,ch++)
	{	
		for(j=1;j<=i;j++)
		{
			if(i/2==0)
			{
				printf("%d",j);
				break;
			}
			else
			{
				printf("%c",ch);
			}
			
		}
		printf("\n");
	}
	return 0;
}
