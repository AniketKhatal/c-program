//wap to search elememt in array using pointer

#include<stdio.h>
int main()
{
	int a[5],*x,i,j,ele;
	printf("enter the element into array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array is :");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
		x=a;
		
		printf("\nthe array using ptr:");\
		for(i=0;i<5;i++)
		{
			printf("%d ",*x);
			x++;
		}
	printf("\nenter the element that uoou want to search:");
	scanf("%d",&ele);

	for(i=0;i<5;i++)
	{
		if(*x==ele)
		{
			printf("\nthe value if found");
			x++;
		}
		
		else
		{
			printf("Not Found");
		}
	}
}
