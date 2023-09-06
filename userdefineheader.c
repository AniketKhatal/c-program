	//Program Name:add two nmber using the user define header file mathanik.h

//calulator:
//#include<stdio.h>
//#include<calulator.h>
//int main()
//{
//	int ch,num;
//	do
//	{
//	printf("1.sum\n2.substrction\n3.multiplication\n4.division\n");
//	printf("Enter the choice:");
//	scanf("%d",&ch);
//	
//	switch(ch)
//	{
//		case 1:
//			sum(1,2);
//			
//		break;
//		
//		case 2:
//			sub(3,1);
//		break;
//		
//		case 3:
//			mul(2,1);
//		break;
//		
//		case 4:
//			div(3,2);
//		break;
//		
//		default:
//		printf("\nOut of bound");	
//			
//	}
//	printf("\nWant to continue:");
//	scanf("%d",&num);
//}
//while(num==1);
//
//	
//	
//	
//	return 0;
//}


//power function:

//#include<stdio.h>
//#include<mathanik.h>
//int main()
//{
//	power();
//}

//for printing the table:
//#include<stdio.h>
//#include<mathanik.h>
//int main()
//{
//	table();
//}

//Program Name:find the lenght

//#include<stdio.h>
//#include<find.h>
//int main()
//{
//	char ch[20];
//	int res;
//	printf("Entre the string:");
//	gets(ch);
//	
//	res=findlenghtstring(ch);
//	
//	printf("\nthe lenght of string is:%d",res);
//}


//find the areas

#include<stdio.h>
#include<area.h>
int main()
{

//	 float res,r;
//	printf("Enter the radius of circle:");
//	scanf("%f",&r);
//	res=areaofcircle(r);
//	printf("\nThe area of circle is:%f",res);

//	int  len,hei;
//	float res;
//	printf("Enter the lenght:");
//	scanf("%d",&len);
//	printf("\nEnter the height:");
//	scanf("%d",&hei);
//	res=areaoftriangle(len,hei);
//	printf("\nThe area of triangle:%f",res);

	int r;
	printf("Enter the lenght of square:");
	scanf("%d",&r);
	int res=areaofsquare(r);
	printf("\nThe area of square:%d",res);
}
