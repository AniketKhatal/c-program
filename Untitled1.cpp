//Program Name:

#include<iostream>
using namespace std;
int main()     //main function
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j<=i)
			{
				printf("*");
			}
			else if(i>j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		
	}
	
	
	
	
	return 0;
}

