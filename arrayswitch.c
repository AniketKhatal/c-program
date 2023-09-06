//wap to to create array of size 6 insert element into it 
//create manu driven program:
//case 1:display all element
//case 2:insert value at the start
//case 3:insert value at specific index
//case 4:insert value at the end of array
//case 5:search element by index
//case 6:search element by value
//case 7:delete element at the start
//case 8:delete element at the specific index
//case 9:delete element at the end

#include<stdio.h>
int main()
{
	int ch,n,a[10],i;
	int val,index;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("\nenter the element into array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\npls! enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("\nthe element of the array:");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		break;
	case 2:
		printf("enter the value: ");
		scanf("%d",&val);
		n++;
		for(i=n;i>1;i--)
		{
			a[i-1]=a[i-2];
		}
		a[0]=val;
		printf("\nthe array is:");
		for(i=0;i<n;i++)
		{
			printf(" %d ",a[i]);
 		}
		break;
	case 3:
		printf("enter the value:");
		scanf("%d",&val);
		printf("enter the index:");
		scanf("%d",&index);
		for(i=n;i>=index;i--)
		{
			a[i]=a[i-1];
		}
		a[index]=val;
		n++;
			printf("\nthe array is:");
		for(i=0;i<n;i++)
		{
			printf(" %d ",a[i]);
		}
		break;
		//case 4:insert value at the end of array
	case 4:
		printf("enter the value:");
		scanf("%d",&val);
		printf("enter the index:");
		scanf("%d",&index);
		for(i=n;i>=index;i--)
		{
			a[i]=a[i-1];
		}
		a[index]=val;
		n++;
		printf("\n the array is :");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		break;
	//case 5:search element by index
	case 5:
		printf("enter the value:");
		scanf("%d",&val);
		for(i=0;i<n;i++)
		{
			if(val==a[i])
			{
				printf("a[%d]-->%d",i,a[i]);
			}
		}
	    break;
		
	default:
		printf("wrong choice :(");
	}
	return 0;
}
