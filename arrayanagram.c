//WAP to input two arrays of size 5 name as a and b and check array is anagram array or not 
//Algorithm:
//enter the element into both array
//compare its length;
//compare both array element with each other
//print as it anagram or not

#include<stdio.h>
int main()
{
	int a[5],b[5],count=0,lena,lenb,i,j;
	
	printf("enter the ele into 1st array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the ele into 2st array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	lena=sizeof(a)/sizeof(a[0]);
	lenb=sizeof(b)/sizeof(b[0]);
	if(lena==lenb)
	{
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
				count++;
				break;
			}
		}
	}
	if(count>=lena)
	{
		printf("\narraya are anagram");
	}
	else
	{
		printf("\nnot anagram ");
	}
}
else
{
	printf("both arrays length are different");
}
		
	return 0;
}
