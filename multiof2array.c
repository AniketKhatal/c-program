//multiplication of two array:
//Algorithm:
//1)Declare 3 2d array
//2)store value into it
//3)apply the addition logic
//4)stored into 3rd array
//5)printf the 3rd array

//dont understand the how it was going:

 #include<stdio.h>
 int main()
 {
 	int a[3][3],b[3][3],c[3][3],i,j,k;
 	printf("Enter the element into array 1st:\n");
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 		scanf("%d",&a[i][j]);
		}
	}
	printf("enter the element into 2nd array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("lets multiply both array and show:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("The result :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d\t",c[i][j]);
		}
		printf("\n");
	}
	

 	return 0;
 }
