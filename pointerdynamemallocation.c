//run time memory allocation by pointer

//#include<stdio.h>
//int main()
//{
//	int i,size,*ptr;
//	printf("enter the  block:");
//	scanf("%d",&size);
//	for(i=1;i<=size;i++)
//	{
//		printf("\nenter the value on block:%u\n",ptr);
//		scanf("%d",ptr);
//		ptr++;	
//			}
//	ptr=ptr-size;
//	printf("display the all value with block:");
//	for(i=1;i<=size;i++)
//	{
//		printf("%u--->%d",ptr,*ptr);
//		ptr++;
//	}
//}

#include<stdio.h>
#include<conio.h>
	void main()
	{  
	   printf("\n\n\n\n");
	   int  *ptr,size,i;
	   printf("\nhow much memory u required\n");
	   scanf("%d",&size);
	   for(i=0; i<size;i++)
	   { 
	    printf("\nEnter value on %u block\n",ptr);
	    scanf("%d",&ptr);
	    ptr++;
	   }
	   //ptr = ptr -size;
	   printf("\nDisplay all records\n");
	   for(i=0; i<size; i++)
	   { 
	    printf("%d\n",*ptr);
	    ptr++;
	   }
	   getch();
	}


