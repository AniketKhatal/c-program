#include<stdio.h>
int main()
{
	int a[10],b[10],n1,n2,c[n1+n2],i;
	
	printf("enter the size of array a:");
	scanf("%d",&n1);
	printf("Enter the size of array b:");
	scanf("%d",&n2);
	printf("enter the element into array a:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element into array b:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\narray before conactination:\n");
	printf("array a:\n");
	for(i=0;i<n1;i++)
	{
		printf("a[%d]---->%d\n",i,a[i]);
	}
	printf("array b:\n");
	for(i=0;i<n2;i++)
	{
		printf("b[%d]---->%d\n",i,b[i]);
	}
	//c=n1+n2;
	printf("\nthe size of the array c:%d",sizeof(c)/sizeof(c[0]));
	return 0;
}
