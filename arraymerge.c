//Program Name:merge two array

#include<stdio.h>

int main()     //main function
{
	int a[5],b[6],c[20],i,j;
	printf("enter the element inot a array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elemment into b array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	int l1=sizeof(a)/sizeof(a[0]);
	int l2=sizeof(b)/sizeof(b[0]);
	int l3=l1+l2;
	printf("The total size of array c is :%d",l3);
	printf("\nLets!,Merge the two array:");
	for(i=0;i<l1;i++)
	{
		c[i]=a[i];
	}
//	printf("\nafter addinf 1st arrai into c :");
//	for(i=0;i<l1;i++)
//	{
//		printf("%d",c[i]);
//	}
//	printf("\nLets add 2nd array:");
	for(i=0,j=l1;i<l2 && j<l3;i++,j++)
	{
		c[j]=b[i];
	}
	printf("\nfianl array c:");
	for(i=0;i<l3;i++)
	{
		printf("%d",c[i]);
	}
	return 0;
}

