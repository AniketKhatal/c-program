//Program Name:

#include<stdio.h>
int main()     //main function
{
	int a[5],b[7],i,j,count=0;
	printf("Enter the element into array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
		count=1;
		for(j=i+1;j<5;j++)
		{//printf("hii");
			if(a[i]==a[j])
			{
				count++;
				a[j]=-1;		
			}	
		}
	b[i]=count;	
	}
	printf("\nThe occerence is :\n");
	for(i=0;i<5;i++)
	{
		if(a[i]!=-1)
		{
			printf("a[%d]---->%d\n",a[i],b[i]);
		}
	}
     return 0;
}

