//WAP to declare array of size 5 and reverse it.
//1) START
//2) Declare array of size 5 
//3) Calculate length of array 
//4) Set one pointer and end pointer
//5) Set one pointer as beginning pointer
//6) Find Middle pointer of array 
//7) Swap value between beginning index and ending index 
//8) Increment start pointer and decrement end pointer up to middle level
//9) Display array after sorting
//10) STOP


#include<stdio.h>
int main()
{
	int a[5],start,end,len,mid,i,temp=0; //2) Declare array of size 5 
	len=sizeof(a)/sizeof(a[0]); //Calculate length
	end=(len-1); //end pointer
	printf("enter the element in array:\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("before reverse\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	mid=len/2;
	for(start=0;start<mid;start++)
	{
		temp=a[start];
		a[start]=a[end];//a[end]=?
		a[end]=temp;
		end--;
	}
	printf("\narray in reverse :\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

