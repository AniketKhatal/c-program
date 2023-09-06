//array
//
//#include<stdio.h>
//int main()
//{
//	int n,i,a[5];
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",& a[i]);
//	}
//	printf("printing the array\n");
//	for(i=0;i<5;i++)
//	{
//		printf("a[%d] --> %d\n",i,a[i]);
//	}
//	return 0;
//}

//insert value at perticular index:

//#include<stdio.h>
//int main()
//{
//	int a[6],i,index,val;
//	printf("Enter the element into the array:");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d",a[i]);
//	}
//	printf("\nEnter the index:");
//	scanf("%d",&index);
//	printf("\nEnter the value:");
//	scanf("%d",&val);
//	for(i=5;i>=index;i--)
//	{
//		a[i+1]=a[i];
//	}
//	a[index]=val;
//	printf("\nThe array after the operation:");
//	for(i=0;i<6;i++)
//	{
//		printf("\na[%d]---->%d",i,a[i]);
//	}
//	return 0;
//}

//Reverse the array:

//#include<stdio.h>
//int main()
//{
//	int a[5],i,len;
//	printf("Enter the element");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\nThe array is :");
//	for(i=0;i<5;i++)
//	{
//		printf("\na[%d]---->%d",i,a[i]);
//	}
////	int count=0,len;
////	while(a[count]!=6)
////	{
////		count++;
////	}
////	len=count;
////	printf("\nThe lenght of the array:%d",len);
//
//	len=sizeof(a)/sizeof(a[0]);
//	printf("\nThe lenght of the array:%d",len);
//	int mid=len/2;
//	int end=len-1;
//	for(i=0;i<mid;i++)
//	{
//		int temp=a[i];
//		a[i]=a[end];
//		a[end]=temp;
//		end--;
//	}
//	printf("\nThe reverse array is :");
//	for(i=0;i<5;i++)
//	{
//		printf("\na[%d]---->%d",i,a[i]);
//	}
//	
//	return 0;
//}

//copy array;

//#include<stdio.h>
//int main()
//{
//	int a[5],b[5],i,count=0,j=0;
//	printf("Enter the element into the array:\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\nThe array a is :");
//	for(i=0;i<5;i++)
//	{
//		printf("\na[%d]--->%d",i,a[i]);
//	}
////	int len=sizeof(a)/sizeof(a[0]);
////	while(a[count]!=len)
////	{
////		printf("hii");
////		break;
////	}
//
//	for(i=0;i<5;i++)
//	{
//		b[j]=a[i];
//	}
//	j++;
//	printf("\nThe copied array b is :");
//	for(i=0;i<5;i++)
//	{
//		printf("\na[%d]---->%d",i,a[i]);
//	}
//	printf("\nBingo!!!,You Successfully done");
//	return 0;
//}


////element occurence of array:
//
//#include<stdio.h>
//int main()
//{
//	int a[6],b[7],count=1,i,j;
//	printf("Enter the element into the array:\n");
//	for(i=0;i<6;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\nThe array is:\n");
//	for(i=0;i<6;i++)
//	{
//		printf(" %d ",a[i]);
//	}
//	for(i=0;i<6;i++)
//	{
//		count=1;
//		for(j=i+1;j<6;j++)
//		{
//			if(a[i]==a[j])
//			{
//				count++;
//				a[j]=-1;
//			}
//		}
//		b[i]=count;
//	}
//	printf("\nThe occurence of the ele of the array:\n");
//	for(i=0;i<6;i++)
//	{
//		if(a[i]!=-1)
//		{
//			printf("\na[%d]---->b[%d]",a[i],b[i]);
//		}
//	}
//	return 0;
//}

//Printing the 2d array:

//#include<stdio.h>
//int main()
//{
//	int a[3][3],i,j;
//	printf("Enter the ele into 2d array:");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("\nThe 2d array is :\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//find max element into from the 2d array;

//#include<stdio.h>
//int main() 
//{
//	int a[3][3],i,j,max=0,x,y;
//	printf("Enter the element into the array:");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("\nThe array is :\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%d\t",a[i][j]);
//		}
//		printf("\n");		
//	}
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			if(max<a[i][j])
//			{
//				max=a[i][j];
//				x=i;
//				y=j;
//			}
//		}
//	}
//printf("a[%d][%d]----->%d",x,y,max);
//	
//	return 0;
//}

//multiplication of 2d array;

//#include<stdio.h>
//int main()
//{
//	int a[3][3],b[3][3],i,j,c[i][j];
//	printf("Enter the element into the a array:");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("\nEnter the lement into the b array:");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&b[i][j]);("")
//		}
//	}
//	printf("\nThe multiplication of two array:");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			c[i][j]=a[i][j]*b[i][j];
//			printf("\t%d",c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//sum of each row of 2d array:
//#include<stdio.h>
//int main()
//{
//	int a[3][3],i,j;
//	printf("enter the element into the array:");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("\nThe sum of each row :\n");
//	for(i=0;i<3;i++)
//	{
//		int sum=0;
//		for(j=0;j<3;j++)
//		{
//			sum=sum + a[i][j];
//			printf("%d\t",a[i][j]);
//		}
//		printf(" =%d\n",sum);
//	}
//	return 0;
//}

//Delete perticular element from the array;

//#include<stdio.h>
//int main()
//{
//	int a[6],i,j,index,ele;
//	printf("Enter the element into that array:");
//	for(i=0;i<6;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<6;i++)
//	{
//		printf("\na[%d]---->%d",i,a[i]);
//	}
//	printf("\nEnter the element that you want to delete:");
//	scanf("%d",&ele);
//	index=5;
//	for(i=0;i<=index;i++)
//	{
//		if(a[i]==ele)
//		{
//			for(j=i+1;j<=index;j++)
//			{
//				a[j-1]=a[j];
//			}
//			i--;
//			index--;
//		}
//	}
//	printf("\nAfter the delete operation:\n");
//	for(i=0;i<=index;i++)
//	{
//		printf("\na[%d]---->%d",i,a[i]);
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int a[10],i,size,index,val;
//	printf("Enter the size of array:");
//	scanf("%d",&size);
//	printf("\nEnter the element into array:");
//	for(i=0;i<size;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\nThe element of the array:");
//	for(i=0;i<size;i++)
//	{
//		printf("%d,",a[i]);
//	}
//	printf("\nEnter the index at u want to insert a value:");
//	scanf("%d",&index);
//	printf("\nEnter the index value:");
//	scanf("%d",&val);
//	for(i=size;i>=index;i--)
//	{
//		a[i]=a[i-1];
//	}
//	a[index]=val;
//	size++;
//	printf("\nThe array after the operation:");
//	for(i=0;i<size;i++)
//	{
//		printf("%d,",a[i]);
//	}
//}
//
//


//#include<stdio.h>
//int main()
//{
//	int a[10],i,size,index,val;
//	printf("Enter the size of the array:");
//	scanf("%d",&size);
//	printf("\nEnter the element into array:");
//	for(i=0;i<size;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\nThe element of the array:");
//	for(i=0;i<size;i++)
//	{
//		printf("%d,",a[i]);
//	}
//	printf("\nEnter the index tht you want to enter the value:");
//	scanf("%d",&index);
//	printf("\nEnter the value:");
//	scanf("%d",&val);
//	for(i=size;i>=index;i--)//adding element at perticular index
//	{
//		a[i+1]=a[i];
//	}
//	a[index]=val;
//	size++;
//	for(i=0;i<size;i++)
//	{
//		printf("%d,",a[i]);
//	}
//}

#include<stdio.h>
int main()
{
	int a[10],i,index,size;
	printf("enter the size:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d,",&a[i]);
	}
	printf("\nEnter the positon from whare u want to delete the ele:");
	scanf("%d",&index);
	for(i=0;i<size;i++)
	{
		a[index]=a[i+1];
	}
	for(i=0;i<size-1;i++)
	{
		printf("%d,",a[i]);
	}
}










