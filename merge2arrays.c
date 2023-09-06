//wap to merge two array in a array
//Algorithm:
//1)Declare two array and enter the element into it
//2)declare 3rd empty array 
//3)display that two array
//4)concatinate the 1st and second array into 3rd one;
//5)display the 3rd array

#include<stdio.h>
int main()
{
	int a[10],b[10],C[20],i,index=0,n1,n2,n3,len,k=0;
	printf("enter the size of array a:");
	scanf("%d",&n1);
	printf("enter the size of array b:");
	scanf("%d",&n2);
	
	printf("enter the element into 1st array:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element into 2nd array:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("1st array before concatination:\n");
	for(i=0;i<n1;i++)
	{
		printf("a[%d]---->%d\n",i,a[i]);
	}
	printf("2nd array before concatination:\n");
	for(i=0;i<n2;i++)
	{
		printf("b[%d]---->%d\n",i,b[i]);
	}
	
	int c[n1+n2];
	printf("array size of c is:%d",sizeof(c)/sizeof(c[0]));

	printf("\nlets concatinate two array:");
	k=0;
	for(i=0;i<n1;i++)
	{
	c[k]=a[i];
//	printf("\nc[%d]----->%n\n",i,c[k]);
	k++;
	}
	
	for(i=0;i<n2;i++)
	{
		c[k]=b[i];
		k++;
	}
	
	printf("\n3rd array with concatinating 1st and 2nd:\n");
	for(i=0;i<n1+n2;i++)
	{
		printf("\nc[%d]----->%d\n",i,c[i]);
	}
	
	return 0;
}
