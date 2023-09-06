//4) Write a C program to enter length and breadth of a rectangle and find its perimeter.
// 	NOTE : P = length + breadth + length + breadth. Or P = 2(length + breadth)

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int len,bre,peri;
	printf("enter the value of length of ractangle :\n");
	scanf("%d",&len);
	printf("enter the value of breadth of ractangle :\n");
	scanf("%d",&bre);
  	peri=(len+bre);
  	printf("%d",peri);
  	int peri1=2*peri;
	printf("the perimeter of the rectangle is :%d\n",peri1);
	return 0;
}
