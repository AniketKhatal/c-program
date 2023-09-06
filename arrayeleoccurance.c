
//occurance of each digit in array
//Algorithm:
//size with 6
//take i/p
//compare each element with rest
//count ++ in  
//same same replace with -1
//counetr stored in another array
//display the occurace

#include<stdio.h>
int main()
{
	int i,j,a[10],b[10],count=0;
	printf("enter the element into array:\n");//element enter
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		count=1;
		for(j=(i+1);j<6;j++)
		{
			if(a[i]==a[j])//occurance check
			{
				count++; //increase counter
				a[j]=-1; //same same set -1
   			}
		}
	b[i]=count;          //stored into another array
	}
	printf("\nthe frequency of each element\n");
	for(i=0;i<6;i++)
	{
		if(a[i]!=-1)
		{
		printf("a[%d]--occurance-->%d\n",a[i],b[i]); ///print the occurance
		}
	}
	return 0;
}
