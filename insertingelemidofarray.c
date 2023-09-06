//WAP to create array of size 6 and store five values in it and input index and value 
//from keyboard and insert value on specified index in array and move array values from index+1
//algo:
//1) Declare array of size 6
//2) Store 5 values in array and put extra block in array 
//3) Input Index and Value from keyboard
//4) Travel array from len-1 to index 
//5) Store value in array using arr [(len-1) +i) =a[i]
//6) Store value on arr [index] =value

#include<stdio.h>
int main()
{
	int a[6],i,index,val,len;
	printf("enter the element :");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len-1;i++)
	{
		scanf("%d",&a[i]);	
	} 
	printf("\nBefore inserting array\n");
	for(i=0;i<len;i++){
		printf("a[%d]--->%d\n",i,a[i]);
	}
	printf("enter the value and the index at which u want to put:");
	scanf("%d%d",&index,&val);
	for(i=(len-2); i>=index;i--){
		a[i+1]=a[i];
	}
	a[index]=val;
	printf("\narray after insertion of element\n");
	for(i=0;i<len;i++)
	{
		printf("a[%d]-->%d\n",i,a[i]);
	}
	return 0;
}
