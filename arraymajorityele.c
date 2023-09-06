//WAP to create array of size 10 and input the value from keyboard and check 
//value is majority element in array or not.
//Algorithm:
//1) Declare array of size 10
//2) Input values in array
//3) Input value for search in array
//4) compare value in array and if value found increment counter by 1 
//5) If counter value greater than mid size of array then print element is majority
//6) If counter value is less than array then print element is not majority 

#include<stdio.h>
int main()
{
	int a[10],val,i,count=0,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter the element into the array:");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("element of array:\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter the value that u want to find majority:");
	scanf("%d",&val);
	for(i=0;i<len;i++)
	{
		if(a[i]==val)
		{
			count++;
		}
	}
	if(count>len/2)
	{
		printf("number are in majority%d:",val);
	}
	else
	{
		printf("number are not in majority:%d",val);
	}
	return 0;
}
