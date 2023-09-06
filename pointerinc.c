//pointer in c

//#include<stdio.h>
//int main()
//{
//	int i=100;
//	int *ptr;
//	ptr=&i;
//	printf("%d",i);
//	printf("\n%u",&i);
//	printf("\n%d",ptr);
//	printf("\n%u",&ptr);
//	printf("\n%d",*ptr);
//	printf("\n%d",*(&i));
//	return 0;
//	
//}

//#include<stdio.h>
//int main()
//{
//	int a[]={10,20,30,40,52},i;
//	int *ptr;
//	ptr=a;
//	printf("%u",ptr);
//	printf("\n%d",*ptr);
//	*(ptr+2)=300;
//	ptr++;
//	*ptr=200;
//	
//	for(i=0;i<5;i++)
//	{
//		printf("\n%u---->a[%d]------>%d",ptr,i,a[i]);//*ptr
//		ptr++;
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int m=300;
	float fx=300.6006;
	char cht='z';
	int *ptr;
	ptr=&m;
	float *ptr1;
	ptr1=&fx;
	char *ptr2;
	ptr2=&cht;
	
	printf("Using & operator:\n");
	printf("addres of m= %u",&m);
	printf("\naddress of fx= %u",&fx);
	printf("\naddres of cht= %u",&cht);
	
	printf("\n\nUsing & and * operator :\n");
	printf("value at addres %u of m=%d",&m,*ptr);
	printf("\nvalue at addres %u of fx=%f",&fx,*ptr1);
	printf("\nvalue at addres %u of cht=%c",&cht,*ptr2);
	
	printf("\n\nUsing only pointer variable :\n");
	printf("address of m =%u",ptr);
	printf("\naddress of fx =%u",ptr1);
	printf("\naddress of cht =%u",ptr2);
	
	printf("\n\nUsing only pointer operator :");
	printf("value at address of m = %d",*ptr);
	printf("\nvalue  at addres of fx= %f",*ptr1);
	printf("\nvalue at address of cht= %c",*ptr2);
	
	return 0;
}
