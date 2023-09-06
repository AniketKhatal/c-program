#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("entre the element:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nthe array is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nthe repetative element is :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==a[i][j])
			{
				printf("%d",a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
