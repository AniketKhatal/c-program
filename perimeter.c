//4) Write a C program to enter length and breadth of a rectangle and find its perimeter.
// 	NOTE : P = length + breadth + length + breadth. Or P = 2(length + breadth)
//5) Write a C program to enter length and breadth of a rectangle and find its area.
//	NOTE:  A = l × b

#include<stdio.h>
#include<conio.h>
int main(){
	int len,bre,peri,area;
	printf("enter the value of length of ractangle :\n");
	scanf("%d",&len);
	printf("enter the value of breadth of ractangle :\n");
	scanf("%d",&bre);
	peri= 2*(len+bre);
	area= len*bre;
	printf("the perimeter of the rectangle is :%d\n",peri);
	printf("the area of the rectangle is :%d\n",area);
	return 0;
}
