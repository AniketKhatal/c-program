//function in c 

#include<stdio.h>
int main()
{
	void add (int,int);//Declaration
	int a,b;
	printf("Enter the Two number:\n");
	scanf("%d%d",&a,&b);
	add(a,b);//Calling
	return 0;
}
void add(int a,int b)//Defination
{
	printf("the addition of two number:%d\n",a+b);
}

